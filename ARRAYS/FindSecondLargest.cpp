#include <iostream>

using namespace std;
// Function that compute second largest element of array;
int getSecondLargestElement(int arr[], int numberOfElement)
{
    // Check if array has less than two element;
    if (numberOfElement == 0 || numberOfElement == 1)
    {
        return -1;
    }
    // Initialize largest and second largest indices;
    int largestIndex = 0;
    int secondLargestIndex = -1;

    // Updating largest and second largest;
    for (int currentIndex = 0; currentIndex < numberOfElement; currentIndex++)
    {
        if (arr[currentIndex] >= arr[largestIndex])
        {
            // If largest get update assign previous largest to second largest;
            secondLargestIndex = largestIndex;
            largestIndex = currentIndex;
        }
        // If current element if not largest and grater than second largest then update second largest;
        else if (arr[currentIndex] != arr[largestIndex])
        {
            if (secondLargestIndex == -1 || arr[currentIndex] > arr[secondLargestIndex])
            {
                secondLargestIndex = currentIndex;
            }
        }
    }
    // Check of there is no second largest (all element are same);
    if (secondLargestIndex == -1)
    {
        throw runtime_error("all element are same");
    }
    // Returning second largest element;
    return arr[secondLargestIndex];
}

int main()
{
    int numberOfElement = 10;
    int arr[numberOfElement] = {9, 3, 5, 2, 5, 1, 7, 6, 4, 11};

    // Calling largest function;
    cout << getSecondLargestElement(arr, numberOfElement);

    return 0;
}