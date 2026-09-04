// Problem: The Lucky Stone
// Deep inside an ancient temple lies the Lucky Stone, a magical artifact that tests numbers using a ritual.
// For a given number N, the stone squares each digit and sums them to form a new number.
// The process repeats until it reaches 1 (Happy Number) or 4 (Not a Happy Number).
// Input: A single positive integer N.
// Output: Print "Happy Number" or "Not a Happy Number".

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    while (n != 1 && n != 4) 
    {
        int sum = 0;
        while (n > 0) 
        {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        n = sum;
    }
    if (n == 1)
        cout << "Happy Number";
    else
        cout << "Not a Happy Number";
    return 0;
}
