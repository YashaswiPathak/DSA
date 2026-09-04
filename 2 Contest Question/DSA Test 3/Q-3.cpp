// Problem: Balanced Bridge
// An engineer is designing a long bridge made up of N connected sections. Each section has a certain weight.
// To safely install the main support pillar, the engineer must find a section where:
// The total weight of all sections to its left equals the total weight of all sections to its right.
// The weight of the current section is not included in either side.
// If multiple such sections exist, return the smallest index. If no such section exists, return -1.
//
// Input Format:
// The first line contains an integer N.
// The second line contains N space-separated integers representing the weight of each bridge section.
//
// Output Format:
// Print the pivot index. If no such index exists, print -1.

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    long long arr[n];
    long long total = 0;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
        total += arr[i];
    }
    long long leftSum = 0;
    for (int i = 0; i < n; i++) 
    {
        if (leftSum == total - leftSum - arr[i]) 
        {
            cout << i;
            return 0;
        }
        leftSum += arr[i];
    }
    cout << -1;
    return 0;
}
