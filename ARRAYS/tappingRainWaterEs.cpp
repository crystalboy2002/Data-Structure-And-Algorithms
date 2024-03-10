#include <iostream>
#include <vector>

using namespace std;

int totalWater(vector<int> &arr)
{
    int n = arr.size();
    vector<int> leftMaxArray(n);
    vector<int> rightMaxArray(n);
    int totalWater = 0;

    // Function to calculate left max array;
    leftMaxArray[0] = arr[0];
    for (int index = 1; index < n; index++)
    {
        leftMaxArray[index] = max(leftMaxArray[index - 1], arr[index]);
    }

    // Function to calculate right max array;
    rightMaxArray[n - 1] = arr[n - 1];
    for (int index = n - 2; index >= 0; index--)
    {
        rightMaxArray[index] = max(rightMaxArray[index + 1], arr[index]);
    }

    // Function to calculate totalWater;
    for (int index = 0; index < n; index++)
    {
        totalWater += min(leftMaxArray[index], rightMaxArray[index]) - arr[index];
    }

    return totalWater;
};