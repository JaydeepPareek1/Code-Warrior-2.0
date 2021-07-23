// Merge Sort O(logn) 1.Stable 2. Inplace - Not
#include<iostream>
#include<stdlib.h>
using namespace std;


void Merge(int *a,int low,int mid,int high){
    int i = low,j = mid + 1,k = 0;
    int n = low + high;
    int *c = new int[n];

    while(i <= mid && j <= high){
        if(a[i] < a[j]){
            c[k] = a[i];
            i++;
        }
        else{
            c[k] = a[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        c[k++] = a[i++];
    }
    while(j<=high){
        c[k++] = a[j++];
    }
    k = 0;
    for(int i = low;i <= high; i++){
        a[i] = c[k];
        k++;
    }
    delete []c;

}

void MergeSort(int *a,int low,int high){
    int mid;
    if(low < high){
        mid = (low + high) / 2;
        MergeSort(a,low,mid);
        MergeSort(a,mid+1,high);
        Merge(a,low,mid,high);
    }
}

int main(){
    int a[] = {10,2,35,16,18,20,19,30};
    int n = sizeof(a) / sizeof(a[0]);
    MergeSort(a,0,n-1);
    for(int i = 0;i < n;i++){
        cout << a[i] << " ";
    }
}