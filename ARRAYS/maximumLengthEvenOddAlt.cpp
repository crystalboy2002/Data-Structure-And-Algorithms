#include <vector>

using namespace std;

// Function that calculate max length of even and odd subarray;
int maxEvenOddAlt(vector<int> arr)
{
    int result = 1;
    int current = 1; // because minmum value would be 1;
    for (int index = 1; index < arr.size(); index++)
    {
        int now = (arr[index] % 2 == 0) ? 0 : 1;
        if (arr[index - 1] % 2 == 0 && now == 1 || arr[index - 1] % 2 != 0 && now == 0)
        {
            current++;
        }
        else
        {
           break;
        }
        result = max(current, result);
    }
    return result;
}