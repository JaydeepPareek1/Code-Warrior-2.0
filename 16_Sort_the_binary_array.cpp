// sort binary array in O(n)
#include<iostream>
using namespace std;

void  SortBinaryArray(int *a,int n){
    int countzeroes = 0;
    
    //1.count zeroes in the given array
    for(int i = 0;i < n;i++){
        if(a[i] == 0){
            countzeroes+=1;
        }
    }
    //2.mutate the zeroes for countzeroes times
    for(int i = 0;i < countzeroes; i++){
        a[i] = 0;
    }
    //3.place the rest numbers it means ones
    for(int i = countzeroes;i < n; i++){
        a[i] = 1;
    }
}

int main(){
    int a[] = {1,0,1,0,0,1,1,1,0};
    int n = sizeof(a)/sizeof(a[0]);
    SortBinaryArray(a,n);
    for(int i = 0;i < n; i++){
        cout<<a[i]<<" ";
    }
}