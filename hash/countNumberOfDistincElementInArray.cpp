
#include <vector>
#include <unordered_set>

using namespace std;
int countDistinctElement(vector<int> arr)
{
    unordered_set<int> s; // unordered_set ignore the duplicate values;
    int m = arr.size() - 1;
    while (m >= 0)
    {
        s.insert(arr[m]);
        m--;
    }
    return s.size(); // return the size of set;
}

// int main()
// {
//     vector<int> arr{10,11,11,12};
//     cout << countDistinctElement(arr);
// }