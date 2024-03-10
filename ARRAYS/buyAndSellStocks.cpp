#include <iostream>
#include <vector>
using namespace std;

// Function to calculate maximum profit from buying and selling stocks
int maxProfit(vector<int> price, int start, int end)
{
    // Base case: If the end index is less than or equal to the start index, no profit can be made
    if (end <= start)
        return  0;

    int profit =  0;
    // We compare every possible pair of prices where the selling price is greater than the buying price
    for (int index = start; index < end; index++)
    {
        for (int sIndex = index +  1; sIndex < end; sIndex++)
        {
            if (price[sIndex] > price[index])
            {
                // Calculate the current profit by subtracting the buying price from the selling price
                // Add the maximum profit that can be obtained from the subarray to the left of the buying price
                // Add the maximum profit that can be obtained from the subarray to the right of the selling price
                int currentProfit = price[sIndex] - price[index] +
                                    maxProfit(price, start, index -  1) +
                                    maxProfit(price, sIndex +  1, end);
                // Update the maximum profit if the current profit is greater
                profit = max(currentProfit, profit);
            }
        }
    }
    return profit;
};

int maxProfitES(vector<int> price, int start, int end)
{
    int profit = 0;
    for (int currentDay = start + 1; currentDay < end;currentDay++)
    {
        if (price[currentDay - 1] < price[currentDay])
        {
            profit += price[currentDay] - price[currentDay - 1];
        }
    
    }
    return profit;
}
int main()
{

    vector<int> price{1, 5, 3, 8, 12};
    cout << maxProfitES(price, 0, price.size());
}
