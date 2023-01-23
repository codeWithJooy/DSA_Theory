#include<iostream>
using namespace std;

#define size 5

class Queue{
    private:
      int arr[size],front,rear;
    public:
      Queue(){
          front=-1;
          rear=-1;
      }  
      bool isFull(){
          if(front == 0 && rear== size-1)
             return true;
          else return false;   
      }
      bool isEmpty(){
          if(front ==-1)
            return true;
          else return false;  
      }
      void Enqueue(int element){
          if(!isFull()){
              if(front==-1){
                  front=0;
              }
              rear++;
              arr[rear]=element;
              cout<<element<<" added Successfully";
          }
          else{
              cout<<"Sorry Stack is Full";
          }
        }

        void Dequeue(){
            if(!isEmpty()){
                int element=arr[front];
            }
        }
};

int main(){

}