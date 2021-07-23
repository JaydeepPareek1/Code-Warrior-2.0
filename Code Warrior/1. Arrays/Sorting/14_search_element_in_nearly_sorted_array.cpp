// Time complexity is O(logN)
#include<iostream>
#include<stdlib.h>
using namespace std;

int BinarySearch(int *a,int n,int e){
    int low = 0,high = n-1,mid;

    while(low <= high){
        mid = (low + high)/2;

        if(e == a[mid]){
            return mid;
        }
        if(a[mid-1] >= low && e == a[mid-1]){
            return mid-1;
        }
        if(high<=a[mid+1] && e == a[mid+1]){
            return mid+1;
        }
        if(e > a[mid]){
            low = mid + 2;
        }
        else{
            high = mid - 2;
        }
    }
    return -1;

}

int main(){
    int a[] = {2,1,3,5,4,7,6,8,9};
    int n = sizeof(a) / sizeof(a[0]);
    int e = 9;
    cout << BinarySearch(a,n,e);
   
}
