//LargestSumSubArray
//time complexity O(N)
#include<iostream>
#include<stdlib.h>
using namespace std;

int LargestSumSubArray(int * a,int n){

    int csum = 0,maxsum = INT_MIN;
    for(int i = 0;i < n;i++){
        csum+=a[i];
        if(csum > maxsum){
            maxsum = csum;
        }
        if(csum < 0){
            csum = 0;
        }
    }
    return maxsum;
}

int main(){
    int a[] = {-2,1,-3,5,4,-7,6,8,-9};
    int n = sizeof(a) / sizeof(a[0]);
    cout << LargestSumSubArray(a,n);
}