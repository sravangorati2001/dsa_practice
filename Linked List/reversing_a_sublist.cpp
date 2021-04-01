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
   int s,e;
   cin>>s>>e;
    head= n.reverseBetween(head,s,e);
   n.print(head);
}