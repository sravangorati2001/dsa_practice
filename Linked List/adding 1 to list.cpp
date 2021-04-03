class Solution
{
    public:
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
    Node* addOne(Node *head) 
    {
       Node *temp,*prev;
       head=reverse(head);
       temp=head;
       int carry=1;
       while(temp){
           if(temp->next==NULL) prev=temp;
           int x=temp->data+carry;
           if(x>9) carry=x/10;
           else carry=0;
           temp->data=x%10;
           temp=temp->next;
       }
       if(carry){ Node *newNode=new Node(carry);
       prev->next=newNode;
       }
       return reverse(head);
    }
};
