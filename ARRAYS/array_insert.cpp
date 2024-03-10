#include <iostream>

using namespace std;
int insert(int arr[], int n, int cap, int val, int index);
int main()
{
    int cap = 11;
    int n = 10;
    int arr[cap] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // sorted array of size 10
    n = insert(arr, n, cap, 20, 3);                 // calling function search;
    for (int i = 0; i < n; i++)                     // printing the result;
    {
        cout << arr[i] << " ";
    }
    return 0;
}

int insert(int arr[], int n, int cap, int val, int index)
{
    // Check if size is full;
    if (cap == n)
        return -1;
        
    // shift element one position right to make room for the new value;
    int i;
    for (i = n - 1; i >= index; i--) // iterate from last to index element;
    {
        arr[i + 1] = arr[i]; // because there is space after last element;
    }
    // Insert new value;
    arr[index] = val;

    // Return the update size of array;
    return ++n; 
}