#include <iostream>
#include <vector>
using namespace std;

// Function that calculate maximum consecutive ones in an array;
int countOnes(vector<bool> arr){
    int countOnes = 0;
    int result = 0;
    for (int index = 0; index < arr.size();index++)
    {
        if (arr[index] != 1)
        {
            countOnes = 0;
        }
        else{
        countOnes++;
        result = max(countOnes, result);
        }
    }
    return result;
};