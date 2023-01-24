#include<iostream>
using namespace std;

class Node{
    public:
      int data;
      Node* next;
      Node(int val){
          this->data=val;
          this->next=NULL;
      }
};

void printLinkedList(Node *n){
   while(n!=NULL){
       cout<<n->data<<" ";
       n=n->next;
   }
}

int main(){
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);

    head->next=second;
    second->next=third;

    printLinkedList(head);
}