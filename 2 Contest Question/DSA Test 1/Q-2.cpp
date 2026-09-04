// Problem: Largest Digit
// Rahul is playing a game where each level is unlocked using a secret numeric code.
// The game considers the largest digit in the code as the champion and the second largest
// distinct digit as the runner-up. If the number contains only one distinct digit, print -1.
// Input: A single integer N.
// Output: Print the second largest distinct digit or -1 if none exists.

#include <iostream>
using namespace std;

int main() 
{
    long long n;
    cin >> n;
    int largest = -1, secondlargest = -1;
    while (n > 0) 
    {
        int digit = n % 10;
        if (digit > largest) 
        {
            secondlargest = largest;
            largest = digit;
        } 
        else if (digit != largest && digit > secondlargest) 
        {
            secondlargest = digit;
        }
        n /= 10;
    }
    cout << secondlargest;
    return 0;
}
