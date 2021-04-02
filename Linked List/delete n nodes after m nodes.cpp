void linkdelete(struct Node  *head, int M, int N)
    {
        Node *temp=head,*temp1;
        while(temp){
       int count=1;
        while(temp and count<M){
        temp=temp->next;
        count++;
        }
        if(temp!=NULL)
        temp1=temp->next;
        int n=N;
        while(temp1 and n--) temp1=temp1->next;
        if(temp){
        temp->next=temp1;
        temp=temp->next;
        }
        }
    }
