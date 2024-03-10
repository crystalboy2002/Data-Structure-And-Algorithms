// array is sorted;
// time complexity is O(n) and space complexity is O(n);
#include <iostream>

using namespace std;
// Function to remove duplicates from array;
int removeDuplicateFromArray(int arr[], int numOfElements)
{
    if (numOfElements == 0)
        throw runtime_error("there is only one element");

    // Creating temporay array to store unique elements;
    int temp[numOfElements];
    int tempSize = 1;

    // Initialize first element of temporay array;
    temp[0] = arr[0];

    // Traverse through whole array and add unique element to temp array;
    for (int currentIndex = 1; currentIndex < numOfElements; currentIndex++)
    {
        if (arr[currentIndex] != temp[tempSize - 1])
        {
            temp[tempSize] = arr[currentIndex];
            tempSize++;
        }
    }
    // Copy temporay array back to main array;
    for (int currentIndex = 0; currentIndex < tempSize; currentIndex++)
    {
        arr[currentIndex] = temp[currentIndex];
    }
    // Returning the actual size of array;
    return tempSize;
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