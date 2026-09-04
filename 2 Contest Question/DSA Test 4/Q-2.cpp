// Problem: The Lost Treasure Scroll
// The Royal Library of Algoria contains magical scrolls arranged in sorted order.
// Many scrolls may contain the same spell number.
// The King has asked you to locate a particular spell.
// Since multiple copies of the same spell may exist, you must find:
// - The first occurrence of the spell.
// - The last occurrence of the spell.
// If the spell does not exist in the library, return: -1 -1.
//
// Input Format:
// The first line contains an integer N.
// The second line contains N space-separated sorted integers.
// The third line contains the target spell number X.
//
// Output Format:
// Print two integers: first_position last_position.
// If the target does not exist, print: -1 -1.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    long long x;
    cin >> x;
    int first = -1, last = -1;
    int low = 0, high = n - 1;
    while (low <= high) 
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) 
        {
            first = mid;
            high = mid - 1;
        } 
        else if (arr[mid] < x) 
        {
            low = mid + 1;
        } 
        else 
        {
            high = mid - 1;
        }
    }

    
    low = 0, high = n - 1;
    while (low <= high) 
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) 
        {
            last = mid;
            low = mid + 1;
        } 
        else if (arr[mid] < x) 
        {
            low = mid + 1;
        } 
        else 
        {
            high = mid - 1;
        }
    }

    if (first == -1) cout << "-1 -1";
    else cout << first << " " << last;
    return 0;
}
