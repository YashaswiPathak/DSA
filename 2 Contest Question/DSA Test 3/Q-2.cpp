// Problem: Shifted Leaderboard
// A gaming platform maintains a leaderboard where players' scores are stored in strictly increasing order.
// Occasionally, the platform moves the first few scores to the end of the list while keeping their relative order unchanged.
// You are given the current leaderboard.
// Your task is to determine whether the leaderboard could have been obtained by shifting a sorted array in this manner.
// - If valid, print the number of left shifts performed.
// - Otherwise, print -1.
// An already sorted leaderboard is considered valid and has 0 shifts.
//
// Input Format:
// The first line contains an integer N, the number of scores.
// The second line contains N space-separated distinct integers.
//
// Output Format:
// Print the number of left shifts if valid, otherwise -1.

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int arr[200005];
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    int k = 0, idx = -1;
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < arr[i - 1]) 
        {
            k++;
            idx = i;
        }
    }
    if (k == 0) 
    {
        cout << 0;
        return 0;
    }
    if (k > 1 || arr[n - 1] > arr[0]) 
    {
        cout << -1;
        return 0;
    }
    cout << n - idx;
    return 0;
}
