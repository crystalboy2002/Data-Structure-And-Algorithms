#include <iostream>

using namespace std;

// Function to rotate an array to the left by a given count
void rotateArrayLeftByCount(int inputArray[], int arraySize, int rotationCount)
{
    // Return early if the array has only one element or rotation count is zero
    if (arraySize == 1 || rotationCount == 0)
        return;

    rotationCount = rotationCount % arraySize; // Adjust rotation count if greater than array size
    int rotatedElements[rotationCount];

    // Store the first rotationCount elements in a separate array
    for (int elementIndex = 0; elementIndex < rotationCount; elementIndex++)
    {
        rotatedElements[elementIndex] = inputArray[elementIndex];
    }

    // Shift the remaining elements to the left by rotationCount positions
    for (int elementIndex = rotationCount; elementIndex < arraySize; elementIndex++)
    {
        inputArray[elementIndex - rotationCount] = inputArray[elementIndex];
    }

    // Append the stored elements to the end of the array
    for (int elementIndex = 0; elementIndex < rotationCount; elementIndex++)
    {
        inputArray[arraySize - rotationCount + elementIndex] = rotatedElements[elementIndex];
    }
}

int main()
{
    int arraySize = 10;
    int rotationCount = 3;
    int inputArray[arraySize] = {9, 0, 5, 2, 5, 0, 7, 6, 4, 11};

    // Call the function to rotate the array
    rotateArrayLeftByCount(inputArray, arraySize, rotationCount);

    // Print the modified array
    for (auto x : inputArray)
    {
        cout << x << " ";
    }
}