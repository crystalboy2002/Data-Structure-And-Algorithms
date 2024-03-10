
#include <vector>

using namespace std;

int isMajorityElement(vector<int> arr)
{
    int counter = 1; // count no element occurrences
    int result = 0;  // this to store potential candidate

    // we use Moore's Voting Algorithm is a concept that uses the idea of voting to find the element in a set that appears more often than the others

    // this loop will find potential candidate;
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
    // Loop to count the occurrences of the potential majority element
    int occurrences = 0;
    for (int i = 0; i < arr.size();i++)
    {
        if (arr[result] == arr[i])
        {
            occurrences++;
        }
    }
    // Check if the potential majority element is indeed the majority
    if (occurrences > (arr.size()/2))
    {
        return result;
    }else
    {
        return -1;
    }
}