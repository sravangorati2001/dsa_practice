#include<bits/stdc++.h>
 template <typename T>
 class Node{
     public:
    T data;
    Node<T> *next;
   Node(T data){
       this->data=data;
       next=NULL;
   }
 };
 template <typename T>
 class stackL{
  Node<T> *head;
  int count;
  public:
  stackL(){
      head=NULL;
      count=0;
  }
  void push(T element){
     Node<T> *newNode= new Node<T>(element);
     newNode->next=head;
     head=newNode;
     count++;
  }
  T pop(){
      if(isEmpty()){
          cout<<"stack empty\n";
          return 0;
      }
     Node<T> *temp=head;
     T val=temp->data;
     head=head->next;
     delete temp;
     count--;
     return val;
  }
  T top(){
    if(isEmpty()){
          cout<<"stack empty\n";
          return 0;
      }
      return head->data;
  }
  int size(){
   return count;
  }
  bool isEmpty(){
   return count==0;
  }
 };
 