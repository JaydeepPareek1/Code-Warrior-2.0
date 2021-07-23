//Frequency count of numbers inside an given array
#include<iostream>
#include<stdlib.h>
using namespace std;

void FrequencyCount(int *a,int n){
    int max = INT_MIN;
    for(int i = 0;i < n;i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    cout << "max is : "<<max<<endl;
    int *b = new int[max+1];
    for(int i = 0;i < max+1;i++){
        b[i] = 0;
    }
    for(int i = 0;i < n;i++){
        b[a[i]]+=1;
    }
    for(int i = 1;i < max+1;i++){
        if(b[i] != 0){
            cout<<i <<" is repeating "<<b[i]<<" times"<<endl;
        }
    }
}

int main(){
    int a[] = {2,5,3,5,2,4,2,7,10,2,4,2,3};
    int n = sizeof(a)/sizeof(a[0]);
    FrequencyCount(a,n);
}