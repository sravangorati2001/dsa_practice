#include<bits/stdc++.h>
using namespace std;
class Node{
    int data ;
    Node* next;
    public:
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
    Node* insert(Node* head,int pos,int val){
        Node *temp=head;
        Node *newNode= new Node(val);
        if(pos==1){
             newNode->next=head;
             head=newNode;
             return head;
        }
        int count=1;
        while(temp!=NULL and count<pos-1){
            temp=temp->next;
            count++;
        }
        if(temp!=NULL){
            newNode->next=temp->next;
            temp->next=newNode;
        }
        return head;
    }
    Node* delet(Node* head,int pos){
    Node *temp=head;
    if(pos==1){
        temp=head->next;
        delete head;
        return temp;
    }
    int count=1;
    while(temp and count<pos-1){
        temp=temp->next;
        count++;
    }
    if(temp){
        Node* a=temp->next;
        temp->next=temp->next->next;
        delete a;
    }
    return head;
    }
    void print(Node* head){
      while(head){
          cout<<head->data<<" ";
          head=head->next;
      }
      cout<<"\n";
    }
    Node* reverse(Node* head){
        Node *cur=head,*prev=NULL,*temp=NULL;
        while(cur!=NULL){
            temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }
        return prev;
    }
    Node* reverseBetween(Node* head, int m, int n)
    {
        Node *temp=NULL,*prev=NULL,*cur=head,*p,*s;
        int count=1;
        while(count<m-1){
            cur=cur->next;
            count++;
        }
         p=cur;
        if(m!=1){
        s=cur->next;
        cur=cur->next;
        }
        else count--;
        while(count<n){
            temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
            count++;
        }
        if(m==1){
            p->next=cur;
            return prev;
        }
        s->next=cur;
        p->next=prev;
        return head;
    }
};
int main(){
   Node n;
   Node *head=n.create_ll();
    head= n.reverseBetween(head,1,5);
   n.print(head);
    int pos,val;
    cin>>pos>>val;
  head= n.insert(head,pos,val);
   
   n.print(head);
  
   head=n.delet(head,3);
   n.print(head);
 
   return 0;
}