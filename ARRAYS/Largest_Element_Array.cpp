#include <iostream>

using namespace std;

// Function that return largest element of an array
int getLargestElement(int arr[], int numberOfElement)
{
    if (numberOfElement == 0)
        return -1;
    // assume the largest element is at first index;
    int largestIndex = 0;

    // Updating largestIndex if current element is larger;
    for (int currentIndex = 1; currentIndex < numberOfElement; currentIndex++)
    {
        if (arr[currentIndex] > arr[largestIndex])
            largestIndex = currentIndex;
    }

    // Return the largest element to main function;
    return arr[largestIndex];
}

int main()
{
    int numberOfElement = 10;
    int arr[numberOfElement] = {9, 3, 5, 2, 5, 1, 7, 6, 4, 11};

    // Calling largest function;
    cout << getLargestElement(arr, numberOfElement);

    return 0;
}