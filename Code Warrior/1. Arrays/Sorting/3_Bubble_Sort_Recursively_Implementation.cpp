// Bubble Sort Recursive 1.Stable 2.Inplace
#include<iostream>
using namespace std;

void RBubbleSort(int *a,int n){
    int temp;
    if(n == 1){
        return;
    }
    for(int i =0;i < n-1;i++){
            if(a[i] > a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
    }
    RBubbleSort(a,n-1);
}

int main(){
    int a[] = {10,30,24,11,14,2};
    int n = sizeof(a)/sizeof(a[0]);
    RBubbleSort(a,n);
    for(int i = 0;i < n;i++){
        cout <<a[i]<<" ";
    }
}