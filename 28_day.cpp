Node *removeDuplicates(Node *head)
{
 // your code goes here
 struct Node *temp=head;
 struct Node *temp1=head->next;
 int t=0,k=0;
 while(temp1!=NULL){
     if(temp->data==temp1->data){
     temp1=temp1->next;
     t=1;
     if(temp1==NULL)
     temp->next=temp1;

     }
     else if(t==1 ){
         temp->next=temp1;
         k=1;
         temp=temp1;
     }
     else{
         temp=temp1;
         temp1=temp1->next;
     }
     if(t==1 && k==0 && temp1==NULL ){
         temp->next=NULL;
     }
     
     
     
 }
 return head;
}
