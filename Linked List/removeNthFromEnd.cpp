
ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        int l=0,count=0;
        while(temp){
            l++;
            temp=temp->next;
        }
        n=l-n;
        if(n==0) return head->next;
        temp=head;
        while(count<n-1){
            temp=temp->next;
            count++;
        }
        temp->next=temp->next->next;
        return head;
    }
