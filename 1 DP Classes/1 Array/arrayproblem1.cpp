#include<iostream>
using namespace std;
int main(){
    int i, arr[]={2,3,4,6,7,5},sum=0,product=1;
    for ( i=0;i<=5;i++){
#
    if(i%2==0)
        {sum=sum+arr[i];
        }
    
    else
       { product=product*arr[i];}

    }
    cout<<sum<<endl;
    cout<<product;
 
  return 0;}