//pattern using recursion
// 1
// 12
// 123
// 1234
// 12345

#include<iostream>
using namespace std;

void printi(int i){
    
    //base case
    if(i == 0)
    return;
    printi(i - 1);
    cout << "*";

    
}
void pattern(int n , int i){
    
    if(n == 0)
    return;
    
    //recursive calling i 
    printi(i);

    cout << endl;
    pattern(n-1,++i);

}


int main(){
    int n = 5;
    pattern(n,1);

}