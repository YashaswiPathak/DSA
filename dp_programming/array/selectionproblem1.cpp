#include <iostream>
using namespace std;
int main(){
    int min=-1, arr[100],size,n;
    cin>>size;
    cout<<"enter the number of elements of an array";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int j=0;j<size;j++){
        if (arr[j]>min && arr[j+1]<arr[j])
        swap(arr[j],arr[j+1]);
    }
    cout<<"after sorting array:";
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    return 0;
}