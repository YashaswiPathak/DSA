#include<iostream>
using namespace std;

int main() {
    int arr[] = {2, 5, 8, 6, 7, 9, 12, 13};
    int n =8;
    int first = -1, second = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == -1)
        printf("No second largest digit found") ;
    else
        printf("Second largest digit is:%d",second);    

    return 0;
}