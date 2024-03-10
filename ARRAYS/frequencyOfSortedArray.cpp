#include <iostream>

using namespace std;

void countFrequency(int arr[], int arraySize)
{
    int frequency =  1;
    for (int index =  1; index < arraySize; index++)
    {
        if (arr[index] != arr[index -  1])
        {
            cout << "The frequency of :" << arr[index -  1] << " is " << frequency << endl;
            frequency =  1; // Reset frequency to  1 for the new number
        }
        else
        {
            frequency++;
        }
    }
    // Print the frequency of the last number
    cout << "The frequency of :" << arr[arraySize -  1] << " is " << frequency << endl;
}

int main()
{
    int arr[8] = {10, 10, 10, 25, 25, 30, 30, 40};
    int arraySize = 8;
    countFrequency(arr, arraySize);
}
