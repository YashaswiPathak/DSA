#include <iostream>
using namespace std;

int main()
{
    char arr[5];

    cout << "Enter a string: ";
    cin >> arr;

    cout << "String = " << arr << endl;

    int length = 0;
    int i;
     while (arr[length] != '\0')
     {
         length++;
     }
// while (arr[i]!= '\0')
//     {
//     length++;
    cout << "Length = " << length;
//     }
    return 0;

}