#include<iostream>
#include<climits>
using namespace std;

bool SubArraySum(int *a,int n,int sum){
    bool T[n+1][sum+1];

    //if 0 item in array
    for(int i = 0;i <= sum;i++)
    T[0][i] = false;

    //if sum is 0
    for(int i = 0;i <= n;i++){
        T[i][0] = true;
    }
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= sum;j++){
            if(a[i-1] > j){
            T[i][j] = T[i-1][j];
        }
            else{
            T[i][j] = T[i-1][j] || T[i-1][j - a[i-1]];
             }
        }
        
    }
    return T[n][sum];
}

int main(){
    int a[] = {7,2,3,5,8};
    int n = sizeof(a) / sizeof(a[0]);

    bool f = SubArraySum(a,n,14);

    cout << f << endl;
}