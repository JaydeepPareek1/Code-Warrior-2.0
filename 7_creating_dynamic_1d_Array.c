#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

    int *p = (int *)malloc(5*sizeof(int));
    for(int i = 0;i<5;i+=){
        scanf("%d",&p[i]);
    }
    for(int i = 0;i<5;i+=){
        printf("%d ",p[i]);
    }
  
    //freeing memory in heap in c
    free(p);
}