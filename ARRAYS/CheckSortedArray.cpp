#include <iostream>

using namespace std;

// Function to check sorted array;
string isSortedArray(int arr[], int numOfElements)
{
    //Traverse through whole array
    for (int index = 1; index < numOfElements; index++)
    {
        // If any previous element grater than current element then
        // Array is not sorted;
        if (arr[index] < arr[index - 1])
        {
            return "false";// Array is not sorted
        }
    }
    // If we reach here,it means all element are in order;
    return "true";
}

int main()
{
    int numOfElements = 10;
    int arr[numOfElements] = {9, 3, 5, 2, 5, 1, 7, 6, 4, 11};

    // Calling function to check if the array is sorted;
    cout << isSortedArray(arr, numOfElements);
    return 0;
}