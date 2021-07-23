// Quick Sort O(n2) 1.Stable 2. Inplace 
#include<iostream>
#include<stdlib.h>
using namespace std;

void QuickSort(int *a,int low,int high){
    int pivot,i,j,temp;
    if(low < high){
        pivot = low;
        i = low;
        j = high;
        while(i < j){
            while(i <= high && a[pivot] >= a[i]){
                  i++;
            }
            while(j>=low && a[pivot] < a[j]){
                j--;
            }
            if(i < j){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = pivot;
        QuickSort(a,low,j-1);
        QuickSort(a,j+1,high);
    }
}

int main(){
    int a[] = {10,5,2,4,9,87,34,15,12,18,20};
    int n = sizeof(a) / sizeof(a[0]);
    QuickSort(a,0,n-1);
    for(int i = 0;i < n;i++){
        cout << a[i] <<" ";
    }
}