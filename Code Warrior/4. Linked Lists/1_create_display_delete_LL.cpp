#include<iostream>
#include<climits>
using namespace std;

struct node{
    int data;
    struct node *next;
}*start = NULL;

void CreateLinkedlist(){

    int n;
    //declaring two pointer variables which stores address of nodes
    struct node *newnode,*current;
    
    //Taking input from user to intsert the amount of nodes
    cout << "enter number of Node : ";
    cin>>n;

    while(n){
        
        newnode = (struct node *)malloc(sizeof(struct node));
        
        //if new node not get any memory from the user then it will recive NULL
        if(newnode == NULL){
            cout << "Memory error";
        }
        cout << "enter the data part : "<<endl;
        cin >> newnode -> data;
        newnode -> next = NULL;

        if(start == NULL){
            //now start will point to the new node which is created recently
            start = newnode;
        }
        else{
            current -> next = newnode;
        }
        current = newnode;
        --n;
    }

}

void Display(){
    
    struct node *ptr;
    ptr = start;

    while(ptr){
        
        cout << ptr -> data <<" " ;
        ptr = ptr -> next;
    }
    cout << endl;
}

void DeleteLinkedList(){
    
    struct node *ptr;
    ptr = start;

    while(ptr){

        start = start -> next;
        ptr -> next = NULL;
        free(ptr);
        ptr = start;
    }
}

void ReverseDisplay(struct node *ptr){

    if(ptr == NULL){
        return;
    }
    ReverseDisplay(ptr->next);
    cout << ptr -> data <<endl;

}

int main(){
    CreateLinkedlist();
    cout <<"Linked list is : "<<endl;
    Display();

    cout << "List in reverse order : "<<endl;
    ReverseDisplay(start);
    DeleteLinkedList();
}