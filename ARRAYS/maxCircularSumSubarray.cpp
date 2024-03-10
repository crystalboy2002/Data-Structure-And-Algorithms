#include <vector>
using namespace std;

int maxCircularSumSubarray(vector<int> arr)
{
    int result = 0;
    // Find maximum sum using Kadane algorithm;
    int maxSum = arr[0];
    int maxResult = arr[0];
    for (int index = 1; index < arr.size(); index++)
    {
        maxSum = max(maxSum + arr[index], arr[index]);
        maxResult = max(maxSum, maxResult);
    }
    // Find minimum sum;
    int minSum = arr[0];
    int minResult = arr[0];
    for (int index = 1; index < arr.size(); index++)
    {
        minSum = min(minSum + arr[index], arr[index]);
        minResult = min(minSum, minResult);
    }
    // subtract from maximum sub array;
    result = maxResult - minResult;
    return result;
}

// O(n2) solution

// // Function that return maxcircularSum in array;
// int maxCircularSumSubarray(vector<int> arr)
// {
//     int result = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         // we calculate sum from a particular element
//         int currentSum = arr[i];
//         int currentMax = arr[i];
//         // this loop calculate all sum form index to next size - 1 element
//         for (int j = 1; j < arr.size(); j++)
//         {
//             currentSum += arr[(i + j) % arr.size()];
//             currentMax = max(currentMax, currentSum);
//         }
//         result = max(result, currentMax);
//     }
//     return result;
// }