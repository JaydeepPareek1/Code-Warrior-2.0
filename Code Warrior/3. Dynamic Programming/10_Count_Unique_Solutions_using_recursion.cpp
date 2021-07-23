#include<iostream>
#include<climits>
using namespace std;

int CountUniqueSolution(int *a,int n,int amt){
    if(amt  == 0){
        return 1;
    }
    if(amt < 0 || n < 0){
        return 0;
    }

    int inc = CountUniqueSolution(a,n,amt - a[n]);

    int exc = CountUniqueSolution(a,n-1,amt);

    return inc + exc;
}

int main(){
    int a[] = {1,2};
    int n = sizeof(a) / sizeof(a[0]);

    int amt = 4;
    cout << CountUniqueSolution(a,n-1,amt);

}