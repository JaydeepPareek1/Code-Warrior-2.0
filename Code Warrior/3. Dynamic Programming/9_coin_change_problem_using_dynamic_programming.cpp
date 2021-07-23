// You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

// Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

// You may assume that you have an infinite number of each kind of coin.

 

// Example 1:

// Input: coins = [1,2,5], amount = 11
// Output: 3
// Explanation: 11 = 5 + 5 + 1
// Example 2:

// Input: coins = [2], amount = 3
// Output: -1
#include<iostream>
#include<climits>
using namespace std;

int FindMinCoins(int *a,int n,int amt){
    int T[amt+1];
    T[0] = 0;

    for(int i = 1; i <= amt ; i++){
        T[i] = INT_MAX;
        int res = INT_MAX;

        for(int j = 0;j < n; j++){

            if(i - a[j] >= 0){
                res = T[i - a[j]];
            }
            if(res != INT_MAX){
                T[i] = min(T[i],res + 1);
            }
        }
    }
    return T[amt];
}

int main(){
    int a[] = {1,3,5,7};
    int n = sizeof(a) / sizeof(a[0]);

    int amt = 10;
    int f = FindMinCoins(a,n,amt);

    if(f == INT_MAX){
        cout << "problem can not be solved" << endl;
    }
    else{
        cout << f << endl;
    }
}

