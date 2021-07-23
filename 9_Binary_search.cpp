//Binary Search  time Complexity -> logn
#include<iostream>
using namespace std;

int BinarySearch(int *a,int n,int ele){
    int mid;
    int low = 0,high = n-1;
    
    for(int i = 0;i < n;i++){
        
        mid = (low + high)/ 2;
        
        if(a[mid] == ele){
            cout << mid << endl;
        }
        else if(a[mid] < ele){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        
    }
    return -1;
}

int main(){

    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    cout << BinarySearch(a,n,6);
    
}