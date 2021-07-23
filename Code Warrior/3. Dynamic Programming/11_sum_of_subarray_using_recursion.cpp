#include<iostream>
#include<climits>
using namespace std;

bool SubArraySum(int *a,int n,int sum){
    if(sum == 0){
        return true;
    }
    if(sum < 0 || n  < 0){
        return false;
    }

    bool inc = SubArraySum(a,n-1,sum - a[n]);

    bool exc = SubArraySum(a,n-1,sum);

    return inc || exc;
}

int main(){
    int a[] = {7,2,3,5,8};
    int n = sizeof(a) / sizeof(a[0]);

    bool f = SubArraySum(a,n-1,14);

    cout << f << endl;
}