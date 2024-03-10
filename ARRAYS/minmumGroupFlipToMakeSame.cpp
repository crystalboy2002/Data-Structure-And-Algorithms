#include <vector>

using namespace std;

// this function find minimum no of flips and minimum no of group flips;
int minFlipsForSameElement(vector<bool> arr)
{
    int result = 0;
    int counter = 1;
    // This loop find element that most;
    for (int index = 0; index < arr.size(); index++)
    {
        if (arr[index] == arr[result])
        {
            counter++;
        }
        else
        {
            counter--;
        }
        if (counter == 0)
        {
            result = index;
            counter = 1;
        }
    };

    // this find no of flips require to make array same opposite to result;
    int numberOfFlips = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != arr[result])
        {
            arr[i] = arr[result] == 0 ? 0 : 1;
            numberOfFlips++;
        }
    }
    return numberOfFlips;
}

int minFlipsForSameElement(vector<bool> arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] != arr[0])
            {
                cout << "From " << i << " -> ";
            }
            else
            {
                cout << i - 1 << endl;
            }
        }
    }
}