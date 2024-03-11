// Problem statement : given an array sorted and an element x you have to return index of element
//  if present in array else return -1 and iff element have multiple occurrence return any index;

#include <iostream>
#include <vector>

int binarySearch(std::vector<int> array, int low, int high, int element)
{

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (array[mid] == element)
        {
            return mid;
        }
        else if (array[mid] > element)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
};

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7}; // Test array
    int target = 4;                             // Element to find
    int result = binarySearch(v, 0, v.size() - 1, target);
    std::cout << "Index of " << target << " is: " << result << std::endl;

    target = 8; // Searching an element that does not exist
    // Perform binary search on the vector 'v' to find the index of 'target' if present, else return -1
    result = binarySearch(v, 0, v.size() - 1, target);
    std::cout << "Index of " << target << " is: " << result << std::endl;
}