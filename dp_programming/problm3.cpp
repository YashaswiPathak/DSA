// strong no. 143=1!+4!+3!
#include <iostream>
using namespace std;

int main()
{
    int num, temp, digit, fact, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        digit = temp % 10;

        fact = 1;
        for (int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == num)
    {
        cout << "Strong Number";
        cin >> num;
    }
    else

    {
        cout << "not a Strong Number";
        cin >> num;
    }

    return 0;
}