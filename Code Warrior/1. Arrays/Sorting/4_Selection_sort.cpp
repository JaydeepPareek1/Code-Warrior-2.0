// Selection Sort  1.Stable 2.Inplace
// Stable : NOT
// Inpace : YES
#include<iostream>
using namespace std;

void SelectionSort(int *a,int n){
    int temp,min;
    for(int i = 0;i < n-1;i++){
        min = i;
        for(int j = i;j < n;j++){
            if(a[min] > a[j]){
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main(){

    int a[] = {10,30,24,11,14,2};
    int n = sizeof(a)/sizeof(a[0]);
    SelectionSort(a,n);
    for(int i = 0;i < n;i++){
        cout <<a[i]<<" ";
    }

}