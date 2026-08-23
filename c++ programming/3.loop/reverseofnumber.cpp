#include<iostream>
using namespace std;
int main ()
{
    int n,rev=0,ld;
    cout<<"enter a number: ";
    cin>>n;
    while(n>0)
    {
       ld = n%10;
       rev = rev*10 + ld;
       n = n/10;
    }
    cout<<rev;

}