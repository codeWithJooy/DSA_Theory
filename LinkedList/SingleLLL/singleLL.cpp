#include<iostream>
using namespace std;

class Node{
    public:
      int data;
      Node* next;
      Node(int data){
          this->data=data;
          this->next=NULL;
      }
};

class LinkedList{
    public:
      Node* head;
      LinkedList(){
          this->head=NULL;
      }
      
      /*
        1.Add Data to the Start of Linked List
      */
      void pushToFront(int data){
          Node* newNode=new Node(data);
          newNode->next=this->head;
          this->head=newNode;
      }
      /*
        2.Add Data at The end of Linked List
     */
      void pushToEnd(int data){
          Node* newNode=new Node(data);
          if(this->head==NULL){
              this->head=newNode;
              return;
          }
          Node* current=this->head;
          while(current->next!=NULL){
              current=current->next;
          }
          current->next=newNode;
      }
      /*
        3.Add After a value of Node
      */
      void pushAfterNode(int data,int value){
          Node* current=this->head;
          if(current==NULL){
              cout<<"List Is Empty"<<endl;
          }
          while(current!=NULL && current->data!=value){
              current=current->next;
          }
          if(current!=NULL){
              Node* newNode=new Node(data);
              newNode->next=current->next;
              current->next=newNode;
              return;
          }
          cout<<"Element with given value not found";
      }


      /*4.Add before value of a node*/
      void pushBeforeNode(int data,int value){
          Node* current=this->head;
          if(current==NULL){
              cout<<"List Is Empty"<<endl;
          }
          while(current!=NULL && current->next->data!=value){
              current=current->next;
          }
          if(current!=NULL){
              Node* newNode=new Node(data);
              newNode->next=current->next;
              current->next=newNode;
              return;
          }
          cout<<"Element with given value not found";
      }

      /*Delete Data from the Front of Linked List*/
      void deleteFromFront(){
          Node* current=this->head;
          this->head=current->next;
          free(current);
      }
      
      /*Delete Data From the End of Linked List*/
      void deleteFromEnd(){
           Node* current=this->head;
           while(current->next->next!=NULL){
               current=current->next;
           }
           Node* temp=current->next;
           current->next=NULL;
           free(temp);
      }

      /*Function to Print the Linked List*/
      void printLinkedList(){
          Node* current=this->head;
          while(current){
              cout<<current->data<<" ";
              current=current->next;
          }
      }


};

int main(){
    LinkedList *head=new LinkedList();
    head->pushToFront(10);
    head->pushToFront(20);
    head->pushToEnd(30);
    head->printLinkedList();

    return 0;
}