//Finding LCS using recursion
#include<string>
#include<iostream>
using namespace std;

int LCS(string str1,string str2,int m,int n){
     
     // here m = length of str1 and n is length of str 2
     //base case
     
     if(m == 0 || n == 0){
         return 0;
     }
     
     if(str1[m-1] == str2[n-1]){
         return 1 + LCS(str1,str2,m-1,n-1);
     }
     
     return max(LCS(str1,str2,m-1,n),LCS(str1,str2,m,n-1));
 }
int main(){
    
    string str1  = "ABCBDAB";
    string str2 = "BDCABA";
    
    cout << LCS(str1,str2,str1.length(),str2.length());
}
