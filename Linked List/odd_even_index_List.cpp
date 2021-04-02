ListNode* oddEvenList(ListNode* head) {
        ListNode *bhead=new ListNode(0);
        ListNode *ahead=new ListNode(0);
        ListNode *before=bhead,*after=ahead;
        int x=1;
        while(head){
            if(x&1){
                before->next=head;
                before=before->next;
            }
            else{
                after->next=head;
                after=after->next;
            }
            head=head->next;
            x++;
        }
        before->next=ahead->next;
        after->next=NULL;
        return bhead->next;
    }
