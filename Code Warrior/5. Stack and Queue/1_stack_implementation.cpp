#include<iostream>
#define size 5
using namespace std;

struct Stack{

    int stack[size];
    int top;

}s;

void push(int data){

    if(s.top == size - 1){
        cout<<"overflow ";
        return;
    }
    s.stack[++s.top] = data;

}

int pop(int pop){

    if(s.top == -1){
        cout << "underflow"<<endl;
        return -999;
    }
    return s.stack[s.top];

}

int peek(){

    if(top == -1){
        cout <<"stack is empty"<<endl;
        return -1;
    }
    return s.stack[s.top];

}

void display(){

    if(s.top == -1){
        cout << "stack is empty";
        return;
    }
    for(int i = s.top;i >= 0;i--){
        cout <<s.stack[i];
    }

}





int main(){

    int choice,data,f;
    s.top = -1;

    do{
        cout <<"enter your choice : "<<"1. push "<<"2. pop "<<"3.peek "<<"4.DIsplay "<<"5.exit "<<endl;
        cin>>choice;

        switch(choice){
            case 1: cout << "enter the data : ";
                    cin>>data;
                    push(data);
                    break;

            case 2 : f = pop();
                    if(f!=999);
                    cout << f;
                    break;

            case 3 : f = peek();
                     peek(data);
                     break;

            case 4 : display();
                     break;

            case 5 : exit();
                    break;
        }

    }while(choice != 5);

    return 0;

}

