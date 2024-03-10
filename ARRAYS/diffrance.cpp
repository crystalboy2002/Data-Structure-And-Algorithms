#include<iostream>
#include<vector>

using namespace std;

int maxdiff(vector<int> &arr)
{
    int size = arr.size();
    int currMax = arr[0] - arr[1];

    for (int index = 0; index < size; index++)
    {
        for (int sIndex = index + 1; sIndex < size; sIndex++)
        {
            currMax = max(currMax, arr[sIndex] - arr[index]);
        }
    }
    return currMax;
};

// Function to find the maximum difference between any two elements in the array
int maxDifference(vector<int> &arr)
{
    int currentMinValue = arr[0];               // Track the current minimum value
    int currentMaxDifference = arr[1] - arr[0]; // Initialize max difference with the first two elements

    // Calculate the minimum value and maximum of the result and difference
    for (int index = 1; index < arr.size(); index++)
    {
        currentMinValue = min(currentMinValue, arr[index]);
        currentMaxDifference = max(arr[index] - currentMinValue, currentMaxDifference);
    }
    return currentMaxDifference;
}

// Main function to test the maxDifference function
int main()
{
    vector<int> arr{2, 3, 10, 6, 4, 8, 1};

    int result = maxDifference(arr);
    if (result == 8)
    {
        cout << "pass";
    }
    else
    {
        cout << "fail" << result;
    }
}
