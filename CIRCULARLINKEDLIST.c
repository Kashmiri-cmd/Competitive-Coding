//circular linked list 
#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node *next;           
};
void traveRsal(struct node *head){
   struct node *ptr=(struct node*)malloc(sizeof(struct node));
   struct node *p=head;
   do{
      printf("%d ",(*p).data);
      p=(*p).next;
   }
   while(p!=head);
   //    printf("%d ",(*p).data);
   //    p=(*p).next;
   // while(p!=head){
   //    printf("%d ",(*p).data);
   //    p=(*p).next;      
   // }
}
struct node *insertionAtbegin(struct node *head,int data){  
   struct node *ptr=(struct node*)malloc(sizeof(struct node));
   struct node *p=head;
   (*ptr).data=data;
   (*ptr).next=head;
   p=(*p).next;
   while((*p).next!=head){
      p=(*p).next;
   }
   (*p).next=ptr;
   head=ptr;
   return head;
}
int main(){
   struct node *head=(struct node*)malloc(sizeof(struct node));
   struct node *first=(struct node*)malloc(sizeof(struct node));
   struct node *second=(struct node*)malloc(sizeof(struct node));
   struct node *third=(struct node*)malloc(sizeof(struct node));
   struct node *fourth=(struct node*)malloc(sizeof(struct node));
   //linking
   (*head).data=0;(*head).next=first;
   (*first).data=1;(*first).next=second;
   (*second).data=2;(*second).next=third;
   (*third).data=3;(*third).next=fourth;
   (*fourth).data=4;(*fourth).next=head; 
   printf("\n before insertion: \n");
   traveRsal(head);
   printf("\n after insertion: \n");
   head = insertionAtbegin(head,69);
   traveRsal(head);
   return 0;
}