#include<iostream>
using namespace std;
int main(){
    int key,mid,low,high,n,arr[n];
    cout<<"enter the size of an array";
    cin>>n;
    cout<<"enter the array";
    for(int i = 0; i<=n; i++){
        cin>>arr[i];
    }
    cout<<"enter key";
    mid= low +  (high-low)/2;
    while(low<high){
        if(mid==key){
        cout<<"found";
    }
    else if (arr[mid]<key)
    {}
}