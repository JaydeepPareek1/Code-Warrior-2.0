#include<iostream>
using namespace std;
int main(){

    //Arrays of Pointers
    int a[5] = {1,2,3,4,5};
    int (*p)[5];
    p = &a;
    cout<<a<<" "<<p<<endl;
    cout<<*a<<" "<<*p<<endl;
    cout<<*a<<" "<<**p<<endl;
}