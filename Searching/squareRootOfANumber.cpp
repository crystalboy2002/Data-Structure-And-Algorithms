#include <iostream>
// O root x time complexity;
int findSquareRoot(int number)
{
    int i = 1;
    while (i * i < number)
    {
        i++;
    }
    return (i - 1);
}
// using binary search to solve this problem
int findSquareRootBS(int number)
{
    int res = -1;
    int lo = 0;
    int hi = number;

    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        int sqrt = mid * mid;
        if (sqrt == number)
        {
            return mid;
        }
        else if (sqrt > number)
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
            res = mid;
        }
    }
    return res;
}

int main()
{
    std::cout << "lower bound of square root is :" << findSquareRoot(9) << std::endl;
    std::cout << "lower bound of square root is :" << findSquareRootBS(9);
};