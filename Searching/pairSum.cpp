#include <iostream>
// problem to find two element from which sum equal to given target;

std::pair<int, int> findPairSumElement(int arr[], int size, int target)
{
    for (int index = 0; index < size; index++)
    {
        for (int sIndex = index + 1; sIndex < size; sIndex++)
        {
            if (arr[index] + arr[sIndex] == target)
            {
                return {index, sIndex};
            }
        }
    }
};

int main()
{

    int arr[] = {2, 7, 11, 15};
    int target = 17;
    int size = sizeof(arr) / sizeof(arr[0]);

    std::pair<int, int> result = findPairSumElement(arr, size, target);

    std::cout << "Index: " << result.first << ", " << result.second << std::endl;

    return 0;
};
