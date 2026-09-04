// Problem: The Balance of Villages
// The Kingdom of Algoria consists of N villages arranged in a straight line.
// For every village, the King wants to determine how balanced it is.
// For a village at position i:
// Left Sum = sum of populations of all villages before i
// Right Sum = sum of populations of all villages after i
// The balance value is: |Left Sum - Right Sum|
// Your task is to calculate the balance value for every village.
//
// Input Format:
// The first line contains an integer N.
// The second line contains N space-separated integers representing the population of each village.
//
// Output Format:
// Print N space-separated integers representing the balance value for every village.

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    long long total = 0;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
        total += arr[i];
    }
    long long leftSum = 0;
    for (int i = 0; i < n; i++) 
    {
        long long rightSum = total - leftSum - arr[i];
        cout << abs(leftSum - rightSum) << " ";
        leftSum += arr[i];
    }
    return 0;
}
