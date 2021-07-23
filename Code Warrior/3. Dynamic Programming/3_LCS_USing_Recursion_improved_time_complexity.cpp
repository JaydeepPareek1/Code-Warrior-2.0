//Finding LCS using after memoizing data in recursion
#include<string>
#include<iostream>
#include<unordered_map>
using namespace std;
int LCS(string str1,string str2,int m,int n,auto &T){
    
    if(m == 0 || n == 0)
    return 0;

    string key = to_string(m) + " " + to_string(n);

    if(T.find(key) == T.end()){
        if(str[m-1] == str2)
    }

}
int main()
    string str1  = "ABCBDAB";
    string str2 = "BDCABA";
    unordered_map<string,int> T;
    cout << LCS(str1,str2,str1.length(),str2.length(),T);
}
}