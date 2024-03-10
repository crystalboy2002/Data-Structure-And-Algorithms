#include <vector>
#include <unordered_set>

using namespace std;

bool subArrayWithZeroSum(vector<int> arr)
{
    unordered_set<int> s;
    int prefixSum = 0;
    for (int index = 0; index < arr.size(); index++)
    {
        prefixSum += arr[index];
        if (s.find(prefixSum) != s.end())
        {
            return true;
        }
        if (prefixSum == 0)
        {
            return true;
        }
        s.insert(prefixSum);
    }
    return false;
};