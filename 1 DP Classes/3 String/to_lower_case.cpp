#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
   
    for (int i= s.length()-1; i>=0; i--) {
         string rev;
        rev=rev+s[i];
        }
    for (int i=0;i<s.length()-1 ;i++) {
        cout<<s[i];
    }
    return 0;
}
