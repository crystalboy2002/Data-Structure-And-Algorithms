#include <vector>
#include <climits>

using namespace std;

int countMaxSum(vector<int> arr)
{
    int result = INT_MIN;
    for (int index = 0; index < arr.size(); index++)
    {
        int currentMaxSum = 0;
        for (int sIndex = index; sIndex < arr.size(); sIndex++)
        {
            currentMaxSum += arr[sIndex]; // because it starting from index;
        }
        result = max(currentMaxSum, result);
    }
    return result;
};


// in O(n) by simple using max ending

int countMaxSumEs(vector<int> arr)
{
    int maxEnding = arr[0];

    for (int index = 1; index < arr.size(); index++)
    {
        maxEnding = max(maxEnding + arr[index], arr[index]);
    }
    return maxEnding;
}