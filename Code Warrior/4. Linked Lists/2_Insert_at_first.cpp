#include<iostream>
#include<climits>
using namespace std;

struct node{
    int data;
    struct node *next;
}*start = NULL;

void InsertionAtFirst(int data){
    
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    if(newnode == NULL){

        cout << "memory error";
        return;
    }
    newnode->next = start;
    start = newnode;
    
   
}

int main(){
    InsertionAtFirst(10);
}