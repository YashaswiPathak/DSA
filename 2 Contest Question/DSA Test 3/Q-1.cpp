// Problem: Perfect Seat Assignment
// A school has arranged students in ascending order of their roll numbers.
// A new student arrives with a roll number X.
// Your task is to determine:
// - If the roll number already exists, return its index.
// - Otherwise, return the index where the student should be inserted so that the order remains sorted.
// Your solution must run in O(log N).
//
// Input Format:
// First line contains integer N.
// Second line contains N sorted integers.
// Third line contains integer X.
//
// Output Format:
// Print the required index.

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
    int x;
    cin >> x;
    int low = 0, high = n - 1, ans = n;
    while (low <= high) 
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) 
        {
            cout << mid;
            return 0;
        } 
        else if (arr[mid] < x) 
        {
            low = mid + 1;
        } 
        else 
        {
            ans = mid;
            high = mid - 1;
        }
    }
    cout << ans;
    return 0;
}
