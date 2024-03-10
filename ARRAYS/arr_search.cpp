#include <iostream>

using namespace std;
int search(int arr[], int n, int target);

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // sorted array of size 10
    int result = search(arr, 10, 19);               // calling function search;
    cout << "Result: " << result << endl;          // printing the result;
    return 0;
}

int search(int arr[], int n, int target) // this function will search the array and return index of target element;
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target) // check if target element match or not;
            return i;         // matched;
    }
    return -1; // if element not in array;
}
