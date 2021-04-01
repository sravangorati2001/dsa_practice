#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data ;
    Node* next;
    Node(){
        this->data=0;
        next=NULL;
    }
    Node(int data){
        this->data=data;
        next=NULL;
    }
    Node* create_ll(){
        int n,data;
       cin>>n;
       Node *head=NULL,*temp=NULL;
       while(n--){
           cin>>data;
           Node *newNode= new Node(data);
           if(head==NULL){
               head=newNode;
               temp=head;
           }
           else{
               temp->next=newNode;
               temp=temp->next;
           }
       }
       return head;
    }
    Node* divide(int N, Node *head){
        // code here
        Node* temp=head,*head1=NULL,*temp1=NULL;
        int count=N;
        while(count--){
            if((temp->data)%2==0){
                Node* newNode= new Node(temp->data);
                if(head1==NULL){
                    head1=newNode;
                    temp1=head1;
                }
                else{
                    temp1->next=newNode;
                    temp1=temp1->next;
                }
            }
            temp=temp->next;
        }
        temp=head;
        count=N;
        while(count--){
            if((temp->data)&1){
                Node* newNode= new Node(temp->data);
                if(head1==NULL){
                    head1=newNode;
                    temp1=head1;
                }
                else{
                    temp1->next=newNode;
                    temp1=temp1->next;
                }
            }
            temp=temp->next;
        }
        return head1;
    }
     void print(Node* head){
      while(head){
          cout<<head->data<<" ";
          head=head->next;
      }
      cout<<"\n";
    }
};
int main(){
 Node n;
   Node *head=n.create_ll();
   int N;
   cin>>N;
    head= n.divide(N,head);
   n.print(head);
}