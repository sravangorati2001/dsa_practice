#include<bits/stdc++.h>
using namespace std;
 
 class Node{
     public:
    int data;
    Node *next;
   Node(int data){
       this->data=data;
       next=NULL;
   }
 };
 class stackL{
  Node *head;
  int count;
  public:
  stackL(){
      head=NULL;
      count=0;
  }
  void push(int element){
     Node *newNode= new Node(element);
     newNode->next=head;
     head=newNode;
     count++;
  }
  int pop(){
      if(isEmpty()){
          cout<<"stack empty\n";
          return 0;
      }
     Node *temp=head;
     int val=temp->data;
     head=head->next;
     delete temp;
     count--;
     return val;
  }
  int top(){
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
 int main(){
  stackL s;
  s.push(20);
  s.push(46);
  cout<<s.pop()<<"\n";
  s.pop();
  cout<<s.size()<<"\n";
 }