// Bubble Sort 1.Stable 2.Inplace
// Time Complexity -> O(n2)
// Space Complexity -> O(1)
#include<iostream>
using namespace std;

void BubbleSort(int *a,int n){
    int temp;
    for(int i =1;i < n;i++){
        for(int j =0;j<n-i;j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main(){
    int a[] = {10,30,24,11,14,2};
    int n = sizeof(a)/sizeof(a[0]);
    BubbleSort(a,n);
    for(int i = 0;i < n;i++){
        cout <<a[i]<<" ";
    }
}