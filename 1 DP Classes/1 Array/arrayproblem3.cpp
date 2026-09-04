#include<iostream>
using namespace std;
int main(){
int arr[]={2,4,3,5,7,8,9};
int count=0;
int x= 4;
for(int i=0;i<7;i++){
    if(arr[i]>x){
        count++;
    }
}cout<<count;
}