#include<iostream>
using namespace std;

int main(){
    int i = 65;
    cout << i << endl;

    char *ptr  = (char *)&i;
    cout << *ptr << endl;
}