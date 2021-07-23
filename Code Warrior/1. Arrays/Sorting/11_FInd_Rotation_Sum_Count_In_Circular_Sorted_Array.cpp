// correct output using binary search
#include<iostream>
#include<stdlib.h>
using namespace std;

int FindRotaionCount(int *a,int n){
    int low  = 0,high = n-1;

    while(low <= high){
        if(a[low] <= a[high]){
            return low;
        }
        int mid = (low + high) / 2;
        int next = (mid + 1) % n;
        int prev = (mid - 1 + n) % n;

        if(a[mid] <= a[next] && a[mid] <= a[prev]){
            return mid;
        }
        if(a[mid] <= a[high]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
    int a[] = {8,9,10,2,5,6};
    int n = sizeof(a) / sizeof(a[0]);
    cout << FindRotaionCount(a,n);
}