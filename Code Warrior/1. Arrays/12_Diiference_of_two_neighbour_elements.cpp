//diff of two neighbour elemets b/w 1 to n-1 and diff should not be repeated
#include<iostream>
#include<stdlib.h>
using namespace std;

int diffTwoNeighbourEle(int *a,int n){
    int diff;
    int *b = new int[n];

    for(int i = 0;i < n;i++){
        diff = abs(a[i-1]-a[i]);

        if(diff == 0 || diff >= n || b[diff] != 0){
            return 0;
        }
        else{
            b[diff] = 1;
        }
    }
    return 1;
}

int main(){
    int a[] = {11,6,2,1,4,6};
    int n = sizeof(a)/sizeof(a[0]);
    cout << diffTwoNeighbourEle(a,n);

}