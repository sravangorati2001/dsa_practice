ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return NULL;
        ListNode *temp1= new ListNode(-1,head);
        ListNode *temp=temp1;
        while(temp and temp->next){
         if(temp and temp->next and temp->next->val==val)
                temp->next=temp->next->next;
         else   temp=temp->next;
        }
        return temp1->next;
    }
