// rotation sum count and find the max of that after comparisons
// 1. Brute Force Approch O(n2)
// 2. Optimal Solution O(n) 

#include<iostream>
#include<stdlib.h>
using namespace std;

void RotationSumCount(int *a,int n){
    //1. Brute Force Approch
    // int max = INT_MIN,d,sum;
    
    // for(int i = 0;i < n;i++){
    //     sum = 0;
    //     for(int j = 0;j < n;j++){
    //         d = (i + j)%n;
    //         sum = sum + j * a[d]; 
    //     }
    //     if(max < sum){
    //         max = sum;
    //     }
    // }
    // cout << "Result  is = "<< max <<endl;

    //2. Optimal Approch for reducing time complexity
    int max = INT_MIN,sum,arrsum = 0,d;

    for(int i = 0;i < n;i++){
        arrsum+=a[i];
    }
    for(int i = 0;i < n;i++){
        sum = sum + i * a[i];
    }
    max = sum;
    for(int i = 1;i < n;i++){
        d = sum - arrsum + a[i - 1] * n;
        if(max < d){
            max = d;
            sum = d;
        }
        sum = d;
    }
    cout << "max is "<<max<<endl;
}

int main(){
    int a[] = {5,4,1,9,2};
    int n = sizeof(a)/sizeof(a[0]);
    RotationSumCount(a,n);
}