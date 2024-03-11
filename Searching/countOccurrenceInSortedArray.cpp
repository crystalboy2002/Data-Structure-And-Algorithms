#include <iostream>
#include <vector>

// combine first and last occurrence
int indexOfLastOccurrence(int array[], int size, int element)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (array[mid] == element)
        {
            // remember to not go out of the bond
            if (mid == size - 1 || array[mid + 1] != element)
                return mid;
            else
                low = mid + 1;
        }
        else if (array[mid] > element)
        {
            high = mid - 1;
        }
        else if (array[mid] < element)
        {
            low = mid + 1;
        }
    }
    return -1;
};
int indexOfFirstOccurrence(int array[], int size, int element)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (array[mid] == element)
        {
            if (array[mid - 1] == element)
                high = mid - 1;
            else
                return mid;
        }
        else if (array[mid] > element)
        {
            high = mid - 1;
        }
        else if (array[mid] < element)
        {
            low = mid + 1;
        }
    }
    return -1;
}

int countOccurrence(int arr[], int size, int element)
{
    int first = indexOfFirstOccurrence(arr, size, element);
    if (first == -1)
        return 0;

    return (indexOfLastOccurrence(arr, size, element) - first + 1);
}

int main()
{
    int arr[] = {10, 15, 20, 20, 40, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 40;
    std::cout << countOccurrence(arr, size, element) << std::endl;
    return 0;
}