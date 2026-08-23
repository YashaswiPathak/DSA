#include<iostream>
using namespace std;
int main()
{
 int sqrt=1,num,x,a=1,n;
cout<<"enter the base number";
cin>>x;
cout<<"enter the power value";
cin>>n;
    while(a<=n){
    sqrt =sqrt*x ;
    a++;
}
    cout<<sqrt;
    return 0;
}