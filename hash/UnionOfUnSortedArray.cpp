#include <vector>
#include <unordered_set>

using namespace std;

int findUnionOfUnsortedArrays(vector<int> arr1, vector<int> arr2)
{
    unordered_set<int>
        s(arr1.begin(), arr1.end());
    for (int index = 0; index < arr2.size(); index++)
    {
        s.insert(arr2[index]);
    }
    return s.size();
}