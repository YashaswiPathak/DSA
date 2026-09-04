// Problem: Swap 47
// A robot stores two important values in its memory: A and B. Due to a software update,
// the robot accidentally stores them in the wrong positions. Your task is to help the robot
// swap the values using a temporary memory location.
// Input: Two space-separated integers A and B.
// Output: Print the swapped values separated by a space.

#include <iostream>
using namespace std;

int main() 
{
    int A, B, temp;
    cin >> A >> B;
    temp = A;
    A = B;
    B = temp;
    cout << A << " " << B;
    return 0;
}
