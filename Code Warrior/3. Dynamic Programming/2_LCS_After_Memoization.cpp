//Finding LCS using after memoizing data
#include<string>
#include<iostream>
using namespace std;

int LCS(string str1,string str2,int m,int n){
    
    int T[m+1][n+1];
    
    for(int i = 0; i <= m; i++){
        T[i][0] = 0;
    }
    for(int j = 0;j <= n;j++){
        T[0][j] = 0;
    }

    for(int i = 1;i <= m;i++){

        for(int j = 1;j <= n;j++){

            if(str1[i-1] == str2[j-1])
            {
                T[i][j] = 1 + T[i-1][j-1];
            }

            else
            {
                T[i][j] = max(T[i][j-1],T[i-1][j]);
            }
        }
    }
    
    return T[m][n];
}

int main(){
    string str1  = "ABCBDAB";
    string str2 = "BDCABA";
    
    cout << LCS(str1,str2,str1.length(),str2.length());
}