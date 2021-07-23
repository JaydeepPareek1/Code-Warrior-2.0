// Insertion Sort  1.Stable 2.Inplace
// Stable : Yes
// Inpace : Yes
#include<iostream>
using namespace std;

void InsertionSort(int *a,int n){
    int i,j,temp;
    i = 1;
    while(i < n){
        j = i - 1;
        temp = a[i];

        while(j>=0 && a[j] > temp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
        i++;
    }
}

int main(){

    int a[] = {10,30,24,11,14,2};
    int n = sizeof(a)/sizeof(a[0]);
    InsertionSort(a,n);
    for(int i = 0;i < n;i++){
        cout <<a[i]<<" ";
    }

}