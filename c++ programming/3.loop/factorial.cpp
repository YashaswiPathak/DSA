#include<iostream>
using namespace std;
int main ()
{
    int n,prod=1;
    cout<<"enter a number";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       prod=prod*i;
       
    } 
    cout<<prod;
    
}