// // Recursive Selection Sort  1.Stable 2.Inplace
// // Stable : NOT
// // Inpace : YES
// #include<iostream>
// using namespace std;

// void RSelectionSort(int *a,int n){
//     int temp,min,j=0;
//     for(int i = 0;i < n-1;i++){
//         min = i;
//             if(a[min] > a[i]){
//                 min = ;
//                 RSelectionSort(a,n-1);
//             }
        
//         temp = a[i];
//         a[i] = a[min];
//         a[min] = temp;
//     }
// }

// int main(){

//     int a[] = {10,30,24,11,14,2};
//     int n = sizeof(a)/sizeof(a[0]);
//     RSelectionSort(a,n);
//     for(int i = 0;i < n;i++){
//         cout <<a[i]<<" ";
//     }

// }