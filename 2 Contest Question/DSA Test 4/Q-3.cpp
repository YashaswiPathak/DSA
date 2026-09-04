// Problem: The Royal Square Root
// The mathematicians of the Kingdom of Algoria have discovered a magical number X.
// The King wants to know the largest integer whose square is less than or equal to X.
// Since the value of X can be very large, using simple iteration may take too long.
// Help the Royal Mathematicians find the answer efficiently.
// The integer square root of X is defined as the largest integer r such that: r × r ≤ X.
//
// Input Format:
// A single integer X.
//
// Output Format:
// Print the integer square root of X.

#include <iostream>
using namespace std;

int main() 
{
    long long x;
    cin >> x;
    long long low = 0, high = x, ans = 0;
    while (low <= high) 
    {
        long long mid = low + (high - low) / 2;
        if (mid * mid <= x) 
        {
            ans = mid;
            low = mid + 1;
        } 
        else 
        {
            high = mid - 1;
        }
    }
    cout << ans;
    return 0;
}
