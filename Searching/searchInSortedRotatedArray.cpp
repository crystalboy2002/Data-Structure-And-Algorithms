#include <iostream>

int searchInSortedRotatedArray(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] > arr[low])
        {
            if (element >= arr[low] && element < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (element > arr[mid] && element <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 40, 60, 5, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 10;
    std::cout << searchInSortedRotatedArray(arr, size, element) << std::endl;
    return 0;
};