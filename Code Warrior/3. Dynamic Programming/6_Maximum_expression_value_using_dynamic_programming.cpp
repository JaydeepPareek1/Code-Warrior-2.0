// s > r > q > p
// ex = a[s] - a[r] + a[q] - a[p]
#include<iostream>
#include<climits>
using namespace std;

void display(int *a,int n){
    for(int i = 0;i < n;i++){
        cout << a[i] <<" ";
        
    }
    cout<<endl;
}

int MaximumSumExpression(int *a,int n)
{
    int first[n+1] = {INT_MIN};
    int second[n] = {INT_MIN};
    int third[n-1] = {INT_MIN};
    int fourth[n-2] = {INT_MIN};

    // for first array
    for(int i = n-1 ;i >= 0 ;i-- )
    {
        first[i] = max(first[i+1],a[i]);
    }
    display(first,n+1);
    // for second array
    for(int i = n-2 ;i >= 0 ;i-- )
    {
        second[i] = max(second[i+1],first[i+1]-a[i]);
    }
    display(second,n);
    // for third array
    for(int i = n-3 ;i >= 0 ;i-- )
    {
        third[i] = max(third[i+1],second[i+1]+a[i]);
    }
    display(third,n-1);
    // for fourth array
    for(int i = n-4 ;i >= 0 ;i-- )
    {
        fourth[i] = max(fourth[i+1],third[i+1]-a[i]);
    }
    display(fourth,n-2);
    return fourth[0];

}

int main()
{
    int a[] = {3,9,10,1,30,40};
    int n = sizeof(a) / sizeof(a[0]);

    cout << MaximumSumExpression(a,n);

}