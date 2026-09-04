// Problem: Lost Student Roll Number
// A teacher is taking attendance in a classroom. Every student has a unique roll number stored in an array.
// One student, Rahul, forgot whether his roll number is present in today's attendance list.
// Your task is to help the teacher quickly find Rahul's roll number.
// If the roll number is found, print the 0-based index where it first appears in the attendance list. Otherwise, print -1.
//
// Input Format:
// The first line contains an integer N, the number of students in the attendance list.
// The second line contains N space-separated integers representing the students' roll numbers.
// The third line contains an integer X, Rahul's roll number.
//
// Output Format:
// Print the 0-based index of Rahul's roll number if it exists in the attendance list; otherwise, print -1.

#include <iostream>
using namespace std;

int main() 
{
    int n, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    cin >> x;
    int index = -1;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == x) 
        {
            index = i;
            break;
        }
    }
    cout << index;
    return 0;
}
