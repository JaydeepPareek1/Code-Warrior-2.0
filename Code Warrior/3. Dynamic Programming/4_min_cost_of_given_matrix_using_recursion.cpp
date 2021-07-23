//finding minimum cost using recursion
#include<iostream>
#include<climits>
#define M 5
#define N 4
using namespace std;

int MinCost(int (*cost)[5] ,int m,int n){
    
    if(m == 0 || n == 0)
    return INT_MAX;

    if(m == 1 && n == 1)
    return cost[0][0];

    return min(MinCost(cost,m,n-1),MinCost(cost,m-1,n)) + cost[m-1][n-1];
}

int main(){
    int cost[5][5] = {{4,7,8,6,4}, {6,7,3,9,2}, {3,8,1,2,4}, {7,1,7,3,7}, {2,9,8,9,3}};

    cout << MinCost(cost,5,5);
}