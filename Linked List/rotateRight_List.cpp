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
    Node* rotate(Node* head){
        Node *temp=head;
        while(temp->next->next){
            temp=temp->next;
        }
        temp->next->next=head;
        head=temp->next;
        temp->next=NULL;
        return head;
    }
        Node* rotateRight(Node* head, int k) {
              Node *temp=head;
            int l=0;
            if(head==NULL) return NULL;
            while(temp){
                temp=temp->next;
                l++;
            }
            k=k%l;
            while(k>0){
                head=rotate(head);
                            k--;
            }
          return  head;
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
   int k;
   cin>>k;
    head= n.rotateRight(head,k);
   n.print(head);
}