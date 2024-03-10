#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;
void countIntersectionOfTwoArrays(vector<int> arr1, vector<int> arr2)
{
    int res = 0;
    unordered_set<int> s(arr1.begin(), arr1.end());
    for (int index = 0; index < arr2.size();index++)
    {
        if (s.count(arr2[index]) > 0)
        {
            res++;
            s.erase(arr2[index]);
        }
    }
    cout << res;
}
