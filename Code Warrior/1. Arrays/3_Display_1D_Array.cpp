#include<iostream>
using namespace std;

void Display(int *a ,int n){
    //here a is points to main.a[]
    for(int i = 0;i < n;i++){
        cout << a[i] << " ";
    }
}

int main(){
    
    int a[5] = {1,2,3,4,5};
    //here n is size of the array
    int n = sizeof(a)/sizeof(a[0]);
    //Display function calling
    Display(a,n);
}