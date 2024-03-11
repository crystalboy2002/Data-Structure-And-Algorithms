#include <iostream>
#include <vector>

// function that implement recursive binary search

int binarySearch(int array[], int low, int high, int element)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (array[mid] == element)
    {
        return mid;
    }
    else if (array[mid] > element)
    {
        return binarySearch(array, low, mid - 1, element); // we return to not use more recursive calls;
    }
    else
    {
        return binarySearch(array, mid + 1, high, element);
    };
};

int main()
{
    int array[] = {1, 3, 5, 7, 9, 11};
    int size = sizeof(array) / sizeof(array[0]);
    // Element to be searched in the array
    int element = 10;
    int result = binarySearch(array, 0, size - 1, element);

    if (result != -1)
        std::cout << "Element found at index: " << result << std::endl;
    else
        std::cout << "Element not found." << std::endl;

    return 0;
}