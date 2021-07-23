#include<iostream>
#include<stdlib.h>
using namespace std;
int n;

int merge(int *a,int low,int mid,int high){
    int i=low,j=mid+1,k=0,sc=0,c[5];

    while(i <= mid && j <= high){
        if(a[i] < a[j]){
                        c[k] = a[i];
            i++;
            k++;
        }
        else{
            c[k] = a[j];
            ++j;++k;
            sc+=mid-i+1; //sc = 1 ,sc = 2,sc = 5
        }
    }
    k = 0;
    for(int i = low;i <= high;i++){
        a[i] = c[k];
        k++;
    }
    return sc;

}

int mergesort(int *a,int low,int high){
    int mid,sc = 0;
    if(low < high){
        mid = (low + high) / 2;
        sc+=mergesort(a,low,mid);
        sc+=mergesort(a,mid+1,high);
        sc+=merge(a,low,mid,high);

        return sc;
    }
    return 0;
}

int main(){
    int a[] = {1,9,6,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    cout << mergesort(a,0,n-1);
}