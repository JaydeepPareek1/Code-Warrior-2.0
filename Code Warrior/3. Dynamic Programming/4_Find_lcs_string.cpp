//Finding LCS using after memoizing data
#include<string>
#include<iostream>
using namespace std;

int LCS(string str1,string str2,int m,int n,int (*T)[20]){
    
    
    
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
string LCSString(string str1,string str2,int m,int n,int (*T)[20]){
    if(m == 0 || n == 0){
        return " ";
    }
    if(T[m-1] == T[n-1]){
        return LCSString(str1,str2,m-1,n-1,T) + str1[m-1];
    }
    if(T[m-1][n] > T[m][n-1]){
        return LCSString(str1,str2,m-1,n,T);
    }
    else{
        return LCSString(str1,str2,m,n-1,T);
    }

int main(){
    string str1  = "ABCBDAB";
    string str2 = "BDCABA";
    
    int m = str1.length();
    int n = str2.length();
    int T[20][20];
    cout << LCS(str1,str2,str1.length(),str2.length());
    
    cout << LCSString(str1,str2,m,n,T);
}