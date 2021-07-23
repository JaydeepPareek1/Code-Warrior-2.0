#include<iostream>
using namespace std;

int main(){

    //declare 3d arrays
    //here row = 3 and column = 4 each { } is representing as a single array
    int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    //Array of pointer which stores address of a 2-D array

    int (*p)[3][4] = &a;
    for(int i = 0;i < 3; i++){
        for(int j = 0;j < 4; j++){
            cout << *(p[i][j]) << " ";
        }
        cout<<endl;
    }
}