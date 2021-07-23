// XOR operation on array
#include<iostream>
using namespace std;

int main(){
    int a[] = {3,2,3,5,5};
    int n = sizeof(a)/sizeof(a[0]);
    int b = 0;

    for(int i = 0;i < n;i++){
        b = b^a[i];
    }
    cout << b <<"element reapeted odd times" <<endl;
}