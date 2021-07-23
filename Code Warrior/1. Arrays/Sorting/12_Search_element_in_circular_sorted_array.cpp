// Time complexity is O(logN)
#include<iostream>
#include<stdlib.h>
using namespace std;

int FindElementInSortedCircularArray(int *a,int n,int e){
    int low = 0,high = n - 1;
    
    while(low <= high){
        int mid = (low + high) / 2;

        if(e == a[mid]){
            return mid;
        }
        if(a[mid] < a[high]){
            if(e > a[mid] && e < a[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        else{
            if(e > a[low] && e < a[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
    }
    return -1;

}

int main(){
    int a[] = {8,9,10,5,6,7};
    int n = sizeof(a) / sizeof(a[0]);
    cout<<FindElementInSortedCircularArray(a,n,6);
}