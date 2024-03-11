#include <iostream>
// worst case is ON
int findPeakElement(int arr[], int size)
{
    if (size == 1) // single element is always a peak element
        return 0;
    if (arr[0] >= arr[1]) // first element check
        return 0;
    if (arr[size - 1] >= arr[size - 2]) // last element check;
        return 0;

    for (int i = 1; i < size - 1; i++)
    {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
            return i;
    }
    return {-1};
}

// Efficient solution using binary search even if array is not sorted
// using that facts that every independent array has a peak element
// if element right to mid is grater then peak will be on right side;
int findPeakElementBS(int arr[], int size)
{
    if (size == 1)
        return 0;

    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == size - 1 || arr[mid + 1] <= arr[mid]))
        {
            return mid;
        }
        if (mid > 0 && arr[mid - 1] > arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {6, 7, 8, 20, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 10;
    std::cout << findPeakElementBS(arr, size);
};