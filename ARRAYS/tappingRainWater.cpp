#include <iostream>
#include <vector>
#include "tappingRainWaterEs.cpp"

using namespace std;
// Function to calculate maximum water can stored;
// Function to calculate the maximum amount of water that can be stored between the walls
int maxWaterStore(vector<int> wallHeights)
{
    int totalWater = 0;

    for (int i = 1; i < wallHeights.size() - 1; i++)
    {
        int leftMax = wallHeights[i];
        int rightMax = wallHeights[i];
        // Calculate left max height
        for (int j = 0; j < i; j++)
        {
            leftMax = max(leftMax, wallHeights[j]);
        }
        // Calculate right max height
        for (int j = i + 1; j < wallHeights.size(); j++)
        {
            rightMax = max(rightMax, wallHeights[j]);
        }
        // Calculate water that can be stored in the current block
        totalWater += (min(rightMax, leftMax) - wallHeights[i]);
    }
    return totalWater;
};

int main()
{
    vector<int> wallArray{3, 0, 1, 2, 5};
    cout << maxWaterStore(wallArray) << endl;
    cout << totalWater(wallArray);
}