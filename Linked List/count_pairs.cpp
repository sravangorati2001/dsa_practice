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
    int countPairs(Node* head1, struct Node* head2, int x) {
        unordered_set<int> s;
        int count=0;
        Node *temp1=head1,*temp2=head2;
        while(temp1){
            s.insert(temp1->data);
            temp1=temp1->next;
        }
        while(temp2){
            if(s.find(x-(temp2->data))!=s.end())
                count++;
                temp2=temp2->next;
        }
        return count;
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
   Node *head1=n.create_ll();
    Node *head2=n.create_ll();
   int N;
   cin>>N;
   cout<<n.countPairs(head1,head2,N)<<"\n";
}