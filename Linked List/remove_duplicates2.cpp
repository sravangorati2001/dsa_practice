ListNode* deleteDuplicates(ListNode* head) {
        ListNode *head1=new ListNode(-101,head);
        ListNode *temp1=head1,*temp=NULL;
        while(temp1 and temp1->next){
            temp=temp1->next;
            int x=temp->val;
            if(temp->next and temp->next->val==x)
            {
                while(temp and temp->val==x)
                    temp=temp->next;
                temp1->next=temp;
            }
            else temp1=temp1->next;
        }
        return head1->next;
    }
