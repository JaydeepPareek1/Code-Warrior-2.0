#include<iostream>
using namespace std;

int Linearsearch(int *a ,int n,int ele){
    for(int i = 0;i < n;i++){
        if(a[i] == ele){
            cout << i <<endl;
        }

    }
    return -1;
}

int main(){

    int a[5] = {1,2,10,11,15};
    int n = sizeof(a)/sizeof(a[0]);
    Linearsearch(a,n,11);

}