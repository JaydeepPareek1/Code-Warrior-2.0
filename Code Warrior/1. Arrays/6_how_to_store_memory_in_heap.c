#include<stdio.h>
#include<conio.h>

int main(){

    int *p = (int *)malloc(sizeof(int));
    *p = 10;
    printf("%d ",*p);
    //freeing memory in heap in c
    free(p);
}