#include <iostream>
#include <vector>

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
int main()
{
    int arr[] = {5, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 5;
    int index = indexOfFirstOccurrence(arr, size, element);
    std::cout << "Last occurrence of " << element << " is at index: " << index << std::endl;
    return 0;
}