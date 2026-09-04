// Problem: The Brave Warriors
// The Kingdom of Arithmia is preparing for battle. A line of warriors stands from left to right, and each warrior has a unique strength.
// A warrior is called a Leader if no warrior standing to their right has a greater strength.
// Your task is to identify all the leaders in the order they appear in the line.
// Note: The last warrior is always a leader because there is no one standing to their right.
//
// Input Format:
// The first line contains an integer N, representing the number of warriors.
// The second line contains N space-separated integers representing the strengths of the warriors.
//
// Output Format:
// Print all the leaders separated by a single space.

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    vector<long long> leaders;
    long long maxRight = arr[n - 1];
    leaders.push_back(maxRight);
    for (int i = n - 2; i >= 0; i--) 
    {
        if (arr[i] > maxRight) 
        {
            leaders.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    for (int i = leaders.size() - 1; i >= 0; i--) cout << leaders[i] << " ";
    return 0;
}
