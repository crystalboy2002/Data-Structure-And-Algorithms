#include <vector>
#include <unordered_set>

using namespace std;

bool findPairsWithSum(vector<int> arr, int target)
{
    unordered_set<int> s;
    for (int index = 0; index < arr.size(); index++)
    {
        // int diff = target - arr[index];
        // if (s.count(arr[index]) > 0)
        // {
        //     return true;
        // }
        // else
        // {
        //     s.insert(diff);
        // }
        if (s.find(target - arr[index]) != s.end())
        {
            return true;
        }
        else
        {
            s.insert(arr[index]);
        }
    }
    return false;
}