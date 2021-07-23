//Recursive Binary Search
#include<iostream>
using namespace std;

// int RBinarySearch(int *a,int low,int high,int ele){
//     int mid;
//     //base case
//     if(low > high){
//         return -1;
//     }
//     mid = (low + high)/2;
//     if(a[mid] == ele){
//         return mid;
//     }
//     else if(a[mid] > ele){
        
//         RBinarySearch(a,low,mid-1,ele);
//     }
//     else{
        
//         RBinarySearch(a,mid+1,high,ele);
//     }
    
// }


// int main(){
//     int a[] = {1,2,3,4,5};
//     int n = sizeof(a) / sizeof(a[0]); 
//     int low = 0,high = n-1;
//    cout <<  RBinarySearch(a,low,high,5);

// }