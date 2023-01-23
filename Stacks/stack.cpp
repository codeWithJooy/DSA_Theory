#include<iostream>
using namespace std;

#define MAX 5

class Stack{
    private:
       int top;
    public:
       int arr[MAX];
       Stack(){
        top=-1;
       }
       bool isFull(){
           return top==MAX-1;
       }
       bool isEmpty(){
           return top==-1;
       }
       void push(int element){
            if(!isFull()){
                top+=1;
                arr[top]=element;
                cout<<arr[top]<<" is added successfully\n";
            }     
            else{
                cout<<"Stack is Full";
            }
       }  
       void pop(){
           if(!isEmpty()){
                int element=arr[top];
                top-=1;
                cout<<element<<" is removed successfully\n";
            }
            else{
                cout<<"Stack is Empty";
            }
       }
       void printStack(){
           if(!isEmpty()){
               for(int i=0;i<=top;i++){
                   cout<<arr[i]<<" ";
               }
           }
       }
};

int main(){
  Stack stack;
  stack.push(10);
  stack.push(20);
  stack.push(30);
  stack.push(40);
  stack.pop();
  stack.printStack();
  return 0;
}