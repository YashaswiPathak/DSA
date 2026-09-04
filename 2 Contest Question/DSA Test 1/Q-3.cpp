// Problem: Power Calculation 6
// A young wizard discovered an ancient Energy Crystal that multiplies its magical power repeatedly.
// Each crystal has a base energy X and an activation level N. When activated, the crystal multiplies
// its energy by itself N times. Compute X raised to the power N without using any built-in power function.
// Input: Two space-separated values X and N.
// Output: Print X^N.

#include <iostream>
using namespace std;

int main() 
{
    int x, n;
    double result = 1;
    cin >> x >> n;
    if (n >= 0) 
    {
        for (int i = 1; i <= n; i++) 
        {
            result *= x;
        }
    } 
    else 
    {
        for (int i = 1; i <= -n; i++)
        {
            result *= x;
        }
        result = 1 / result;
    }
    cout << result;
    return 0;
}
