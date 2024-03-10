#include <iostream>

using namespace std;

// Function that left rotate array by one;
void leftRotateByD(int arr[], int numberOfElement)
{
    int temp = arr[0]; // Temporay variable that store array first index;
    // Moveing each element one place forword;
    for (int currentIndex = 1; currentIndex < numberOfElement; currentIndex++)
    {
        arr[currentIndex - 1] = arr[currentIndex];
    }

    arr[numberOfElement - 1] = temp; // copy back first element to end of array;
}

int main()
{
    int numberOfElement = 10;
    int arr[numberOfElement] = {9, 0, 5, 2, 5, 0, 7, 6, 4, 11};

    // calling function
    leftRotateByD(arr, numberOfElement);
    // printing changed array
    for (auto x : arr)
    {
        cout << x << " ";
    }
}
