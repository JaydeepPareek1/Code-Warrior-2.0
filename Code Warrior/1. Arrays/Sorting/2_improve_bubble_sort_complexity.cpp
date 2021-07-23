// Improved Bubble Sort 1.Stable 2.Inplace
// Time Complexity -> O(1)
// Space Complexity -> O(1)
#include<iostream>
using namespace std;

void BubbleSort(int *a,int n){
    int temp,f;

    for(int i =1;i < n;i++){
        f = 0;
        for(int j =0;j<n-i;j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        if(f == 0){
            break;
        }
    }
}

int main(){
    int a[] = {1,2,7,8,10,11,15};
    int n = sizeof(a)/sizeof(a[0]);
    BubbleSort(a,n);
    for(int i = 0;i < n;i++){
        cout <<a[i]<<" ";
    }
}