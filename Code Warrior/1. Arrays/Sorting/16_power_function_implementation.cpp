//time complexity O(logb)
#include<iostream>
#include<stdlib.h>
using namespace std;

int pow(int a,int b){

    if(b == 0)
    return 1;

    if(b & 1)
    return a * pow(a,b/2) * pow(a,b/2);

    return pow(a,b/2) * pow(a,b/2);

}

int pow2(int a,int b){
    int pow = 1;

    while(b>0){
        if(b & 1){
            pow = pow * a;
        }
        b = b / 2;

        a = a  * a;
    }
    return pow;
}

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    //cout <<pow(a,b);
    cout << pow2(a,b);
}