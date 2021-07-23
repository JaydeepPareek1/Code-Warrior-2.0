//merging two sorted arrays
#include<iostream>
using namespace std;

int *MergeTwoSortedArrays(int *a,int *b,int n1,int n2){
    int i = 0;
    int j = 0;
    int k = 0;
    int *c = new int[n1+n2];
    while(i<n1 && j<n2){
        if(a[i] < b[j]){
            c[k] = a[i];
            i++;
            k++;
        }
        else{
            c[k] = b[j];
            k++;
            j++;
        }
    }
    while(i < n1){
        c[k++] = a[i++];
    }
    while(j < n2){
        c[k++] = b[j++];
    }
    return c;
}
int main(){
    int a[] = {1,7,15,18,20,25,55,60};
    int n1 = sizeof(a)/sizeof(a[0]);
    
    int b[] = {2,6,10,12,14,28,54,60,66,80};
    int n2 = sizeof(b)/sizeof(b[0]);
    
    int * c = MergeTwoSortedArrays(a,b,n1,n2);
    for(int i = 0;i<n1+n2;i++){
        cout << c[i] <<" ";
    }
    
    
}