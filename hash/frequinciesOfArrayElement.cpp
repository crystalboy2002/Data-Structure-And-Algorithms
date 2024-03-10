#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

int countFrequenciesOfArrayElements(vector<int> arr)
{
    unordered_map<int, int> s;
    for (int index = 0; index < arr.size(); index++)
    {
        s[arr[index]]++;
    }

    if (s.find(4) != s.end())
    {
        return {s[4]};
    }

    // for (auto x : s)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }
    // return s.size();
}