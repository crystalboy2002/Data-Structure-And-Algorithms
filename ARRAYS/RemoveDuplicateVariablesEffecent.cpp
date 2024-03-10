// array is sorted;
// time complexity is O(n) and space complexity is O(n);
#include <iostream>

using namespace std;
// Function to remove duplicates from array;
int removeDuplicateFromArray(int arr[], int numOfElements)
{
    // Initializing result array with unique element it's also act as size of result array;
    int resultArrayIndex = 1;

    // Traverse through whole array;
    for (int currentIndex = 1; currentIndex < numOfElements; currentIndex++)
    {
        // Because array is sorted so when we find unique element the increase size of result and overwrite
        // That duplicate array;
        if (arr[currentIndex] != arr[resultArrayIndex - 1])
        {
            arr[resultArrayIndex] = arr[currentIndex];
            resultArrayIndex++;
        }
    }
    // Return size of array without duplicate elements;
    return resultArrayIndex;
}

int main()
{
    int numOfElements = 10;
    int arr[numOfElements] = {3, 3, 5, 2, 5, 1, 6, 6, 4, 11};

    // Calling function to remove duplicate elements from array;
    numOfElements = removeDuplicateFromArray(arr, numOfElements);

    // Printing array without duplicate elements;
    for (int currentIndex = 0; currentIndex < numOfElements; currentIndex++)
    {
        cout << arr[currentIndex] << " ";
    }

    return 0;
}
