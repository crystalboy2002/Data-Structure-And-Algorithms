#include <iostream>
#include <algorithm>

using namespace std;

// Function to send zero at end of array
void sendZeroAtEnd(int arr[], int numberOfElement)
{
    int count = 0; // to track zero element index;
    for (int currentIndex = 0; currentIndex < numberOfElement; currentIndex++)
    {
        if (arr[currentIndex] != 0)
        {
            swap(arr[currentIndex], arr[count]);
            count++;
        }
    }
}

int main()
{
    int numberOfElement = 10;
    int arr[numberOfElement] = {9, 0, 5, 2, 5, 0, 7, 6, 4, 11};

    // calling function
    sendZeroAtEnd(arr, numberOfElement);

    // printing changed array
    for (auto x : arr)
    {
        cout << x << " ";
    }
}
