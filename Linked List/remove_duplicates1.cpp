Node *removeDuplicates(Node *head)
{
   Node *temp=head;
   while(temp and temp->next){
       while(temp and temp->next and temp->data==temp->next->data)
       temp->next=temp->next->next;
       temp=temp->next;
   }
   return head;
}
