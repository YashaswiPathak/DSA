#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int vowel = 0, consonant = 0;

    cout << "Enter a string: ";
    cin >> str;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
           str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            vowel++;
        else
            consonant++;
    }

    cout << "Vowels = " << vowel << endl;
    cout << "Consonants = " << consonant << endl;

    return 0;
}