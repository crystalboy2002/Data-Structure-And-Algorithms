#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
// naive approach to solve this problem O(n2) O(1)
void findLongestSubarrayWithSum(vector<int> arr, int sum)
{
    int res = 0;
    // we are computing each possible subarray and storing maximum of there length;
    for (int index = 0; index < arr.size(); index++)
    {
        int current_sum = arr[index];
        for (int sIndex = index + 1; sIndex < arr.size(); sIndex++)
        {
            current_sum += arr[sIndex];
            if (current_sum == sum)
            {
                res = max(res, sIndex - index);
            }
        }
        // if (current_sum == sum)
        // {
        //     res = (index + 1);
        // }
    }
    cout << res;
};

// efficient solution
void findLongestSubarrayWithSum2(vector<int> arr, int sum)
{
    // we are going to use hashmap to solve this problem

    unordered_map<int, int> m;
    int prefixSum = 0;
    int res = 0;
    for (int index = 0; index < arr.size(); index++)
    {
        // edge case prefix sum == sum
        if (prefixSum == sum) // 2,3,1 sum = 5
        {
            res = index + 1; // till current index
        }
        // compute max prefix sum
        prefixSum += arr[index];
        if (m.find(prefixSum) == m.end())
            m.insert({prefixSum, index});
        // checking in hash map
        if (m.find(prefixSum - sum) != m.end())
        {
            res = max(res, index - m[prefixSum - sum]);
        }
    }
    cout << res;
};

int main()
{
    vector<int> arr{8, 3, 1, -6, 6, -2, 2};
    findLongestSubarrayWithSum2(arr, 0);
}