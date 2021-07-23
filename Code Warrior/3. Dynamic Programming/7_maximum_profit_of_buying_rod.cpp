//finding max profit using recursion
#include<iostream>
#include<climits>
using namespace std;

int MinCut(int *price,int n)
{
    int max = INT_MIN,cost = INT_MAX;
    if(n == 0)
    return 0;

    for(int i = 1;i <= n;i++){
        cost = price[i-1]+MinCut(price,n-i);

        if(cost > max){
            max = cost;
        }
    }
    return max;
}

int main(){
    int length[] = {1,2,3,4,5,6};
    int price[] = {1,5,8,9,10,17,17,20};

    cout <<MinCut(price,4);
}