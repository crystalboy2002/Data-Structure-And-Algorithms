#include <iostream>

using namespace std;

// Function to reverse given array;
void reverseArrayElements(int arr[], int numOfElements)
{
    // Initializing temporay variable for storing array value;
    int temp;
    // Initializing indices for the start and end of the array;
    int startIndex = 0;
    int endIndex = numOfElements - 1;

    // Swaping first and last element using temp variable;
    while (startIndex < endIndex)
    {
        temp = arr[startIndex];
        arr[startIndex] = arr[endIndex];
        arr[endIndex] = temp;
        startIndex++;
        endIndex--;
    }
}

int main()
{
    int numOfElements = 10;
    int arr[numOfElements] = {9, 3, 5, 2, 5, 1, 7, 6, 4, 11};

    // Calling reverseArrayElements function to reverse array;
    reverseArrayElements(arr, numOfElements);

    // Printing updated reverse array;
    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}