// Time complexity is O(logN)
#include<iostream>
#include<stdlib.h>
using namespace std;

int BinarySearch(int *a,int n,int flag,int e){
    int low = 0,high = n-1,res = -1,mid;

    while(low <= high){
        mid = (low + high)/2;
        if(e == a[mid]){
            res = mid;
            if(flag){
                high = mid - 1;
            }
            else{
                low = mid  + 1;
            }
        }
        else if(e < a[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return res;

}

int main(){
    int a[] = {2,5,5,5,6,6,4,4,7,7,9};
    int n = sizeof(a) / sizeof(a[0]);
    int e = 5;
    int f = BinarySearch(a,n,1,e);
    int l = BinarySearch(a,n,0,e);
    cout << f << " " << l <<endl;
    cout <<"total occurance of the number is : "<<l - f + 1<<endl;
}
