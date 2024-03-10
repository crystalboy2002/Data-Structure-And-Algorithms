#include <iostream>
// #include "countNumberOfDistincElementInArray.cpp"
// #include "subArrayWithZeroSum.cpp"
#include "frequinciesOfArrayElement.cpp"
using namespace std;

int main()
{
    vector<int> arr1{
        3, 4, 3, -1, 1};
    // vector<int> arr2{15, 15, 20, 10};
    cout << countFrequenciesOfArrayElements(arr1);
};