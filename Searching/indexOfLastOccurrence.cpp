#include <iostream>
#include <vector>

int indexOfLastOccurrence(int array[], int size, int element)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (array[mid] == element)
        {
            if (array[mid + 1] == element)
                low = mid + 1;
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
int main()
{
    int arr[] = {10, 15, 20, 20, 40, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 40;
    int index = indexOfLastOccurrence(arr, size, element);
    std::cout << "Last occurrence of " << element << " is at index: " << index << std::endl;
    return 0;
}