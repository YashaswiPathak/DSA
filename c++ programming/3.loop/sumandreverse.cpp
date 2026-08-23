#include <iostream>
using namespace std;

int main() {
    int n, original, digit, rev = 0, sum;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n > 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    sum = original + rev;

    cout << "Original Number = " <<original<<endl; 
    
    cout << "Reverse Number = " <<rev<<endl ;
    
    cout << "Sum = " <<sum<<endl;
    

    return 0;
}//here we have not assign sum=0 as we know that here sum is replaced by different variable here nothing is added directly into sum variable and here sum is not increased again and again we are not storing value in sum 
