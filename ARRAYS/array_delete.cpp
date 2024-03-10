#include <iostream>

using namespace std;

// Function to delete element from array
int del(int arr[], int n, int x)
{
    //Check element position
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            break;
        }
    }
    //If element not found
    if (n == i)
    {
        return n;
    }
    //Deleting element by shifting one step forward
    for (int j = i; j < n; j++)
    {
        arr[j] = arr[j + 1];
    }
    //Returning decreased size of array
    return (n - 1);
}

int main()
{
    int n = 10;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // sorted array of size 10
    n = del(arr, n,8);                            // calling function delete;
    for (int i = 0; i < n; i++) // printing the result;
    {
        cout << arr[i] << " ";
    }
    return 0;
}