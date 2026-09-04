// Problem: Mountain Trail Inspection
// A group of hikers is exploring a mountain trail. Along the trail, sensors record the height at different checkpoints.
// For the trail to be considered safe, the recorded heights should never decrease as the hikers move forward.
// In other words, every checkpoint’s height should be greater than or equal to the previous checkpoint’s height.
// Your task is to determine whether the recorded heights form a sorted (non-decreasing) sequence.
// Print "YES" if the trail is safe; otherwise, print "NO".
//
// Input Format:
// The first line contains an integer N, the number of checkpoints.
// The second line contains N space-separated integers representing the heights recorded at each checkpoint.
//
// Output Format:
// Print "YES" if the array is sorted in non-decreasing order, otherwise print "NO".

#include <iostream>
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
    bool safe = true;
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < arr[i - 1]) 
        {
            safe = false;
            break;
        }
    }
    cout << (safe ? "YES" : "NO");
    return 0;
}
