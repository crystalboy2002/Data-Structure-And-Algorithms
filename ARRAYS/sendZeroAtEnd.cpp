#include <iostream>

using namespace std;

// Function to send zero at end of array
void sendZeroAtEnd(int arr[], int numberOfElement)
{
    for (int currentIndex = 0; currentIndex < numberOfElement - 1; currentIndex++)
    {
        if (arr[currentIndex] == 0)
        {
            // Find the next non-zero element in the array
            int tempIndex = currentIndex;
            for (tempIndex; tempIndex < numberOfElement; tempIndex++)
            {
                if (arr[tempIndex] != 0)
                {
                    // Swap the current zero element with the found non-zero element
                    swap(arr[currentIndex], arr[tempIndex]);
                    break;
                }
            }
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
