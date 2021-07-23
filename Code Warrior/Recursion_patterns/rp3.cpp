#include<iostream>
using namespace std;

void print_space(int space){

    if(space == 0)
    return;

    print_space(space-1);
    cout << " ";
   
}

void printn(int num){

    if(num == 0)
    return;

    printn(num-1);
    cout << num;
   
}

void pattern(int n, int m){
    
    // base case
    if(n == 0)
    return;

    print_space(n-1);
    printn(m-n+1);

    cout<<endl;

    pattern(n-1,m);

}

int main(){
    int n = 5 , m = 5;
    pattern(n,m);
    
}