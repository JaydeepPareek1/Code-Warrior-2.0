// find subarray sum is zero if then return 1 else return 0
#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;

int FindSubArrayWithZeroSum(int *a,int n){
    unordered_set<int> set;
    set.insert(0);
    int sum = 0;

    for(int i = 0;i < n;i++){
        sum+=a[i];

        if(set.find(sum) != set.end()){
            return 1;
        }
        else{
            set.insert(sum);
        }
       
    }
    return 0;
}
int main(){
    int a[] = {3,4,-7,3,1,3,1,-4,-2,-2};
    int n = sizeof(a)/sizeof(a[0]);
    cout << FindSubArrayWithZeroSum(a,n);
}