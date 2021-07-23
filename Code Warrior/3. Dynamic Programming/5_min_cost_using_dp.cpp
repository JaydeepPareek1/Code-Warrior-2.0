//finding minimum cost using dynamic programming
#include<iostream>
#include<climits>
#define M 5
#define N 5
using namespace std;

int MinCost(int (*cost)[N] ,int m,int n){
    
    int T[M][N];

    for(int i = 0;i < m;i++)
    {
        for(int j = 0; j < n;j++)
        {
            T[i][j] = cost[i][j];

            if(i == 0 && j > 0)
            {
                T[0][j]  += T[0][j-1];
            }
            else if(j == 0 && i > 0)
            {
                T[i][0] += T[i -1][0];
            }
            else if(i > 0 && j > 0){
                T[i][j] += min(T[i-1][j],T[i][j-1]);
            }
        }
    }
    return T[m-1][n-1];
}

int main(){
    int cost[M][N] = {{4,7,8,6,4}, {6,7,3,9,2}, {3,8,1,2,4}, {7,1,7,3,7}, {2,9,8,9,3}};

    cout << MinCost(cost,M,N);
}