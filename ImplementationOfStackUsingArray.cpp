#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top;
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int x){
        if(top == size - 1){
            cout<<"Stack Overflow";
        }else{
            top++;
            arr[top] = x;
        }
    }
    void pop(){
        if(top >= 0){
            top--;
        }else{
            cout<<"Stack Underflow";
        }
    }
    int peek(){
        if(top >= 0 && top < size){
            return arr[top];
        }else{
            cout<<"Stack is empty";
            return -1;
        }
    }
    bool isEmpty(){
        if( top == -1)
        return true;
        else{
            return false;
        }
    }
    
    void print(){
        while(!isEmpty()){
            cout<<peek()<<" "<<endl;
            pop();
        }
    }
};
int main()
{
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.print();
    return 0;
}