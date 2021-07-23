// Find sum of pair 
// 1. Brute Force O(n2)
// 2. Optimal Solution O(nlogn)
// 3. optimal Solution O(n)

#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<stdlib.h>
using namespace std;

// 1.Brute Force Approch
// void FindPair(int *a,int n,int sum){
//     for(int i =0;i < n;i++){
//         for(int j = i+1;j < n;j++){
//             if((a[i] + a[j]) == sum){
//                 cout << "pair is "<<a[i]<<" and "<<a[j]<<endl;
//             }
//         }
//     }
// }

//  2. O(nlogn)
// void FindPair(int *a,int n,int sum){
//     sort(a,a+n);
//     int low = 0,high = n-1;
//     while(low < high){
//         if((a[low] + a[high]) == sum){
//             cout << "pair is "<<a[low]<<" and "<<a[high]<<endl;
//             return ;
//         }
//         else if((a[low] + a[high]) > sum){
//             high = high - 1;
//         }
//         else{
//             low = low + 1;
//         }
//     }
//     cout << "pair is not found "<<endl;                                               
// } 
 
 //3.optimal method for finfing in O(n)
//  void FindPair(int *a,int n,int sum){
//      unordered_map<int,int> map;

//      for(int i = 0;i < n;i++){
//          if(map.find(sum-a[i]) != map.end()){
//              cout << "pair found at "<< a[map[sum - a[i]]<<" "<<a[i]<<endl;
//              return;
//          }
//          map[a[i]] = i;
//      }
//  }

// int main(){
//     int a[] = {1,2,9,3,7};
//     int n = sizeof(a)/sizeof(a[0]);
//     int sum = 11;
//     FindPair(a,n,sum);
// }