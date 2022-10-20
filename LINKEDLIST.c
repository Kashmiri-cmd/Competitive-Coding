//traversal for linked list 
#include<stdio.h>
#include<stdlib.h>
struct node{
      int data;
      struct node *next;
           };

void traversal(struct node *ptr){ int i=0;
      while(ptr!=NULL){ 
            printf("%d ",i ); i++;
            printf("%d\n",(*ptr).data);
            ptr=(*ptr).next;
      }
}
int main(){
   struct node *head;
   struct node *first;
   struct node *second;
   struct node *third;
   struct node *fourth;

   //dynamic allocation
   head = (struct node*)malloc(sizeof(struct node));
   first = (struct node*)malloc(sizeof(struct node));
   second = (struct node*)malloc(sizeof(struct node));
   third = (struct node*)malloc(sizeof(struct node));
   fourth = (struct node*)malloc(sizeof(struct node));

   //making chain inshort linking 
   (*head).data=1;
   (*head).next=first;

   (*first).data=2;
   (*first).next=second;

   (*second).data=3;
   (*second).next=third;

   (*third).data=4;
   (*third).next=fourth;

   (*fourth).data=5;
   (*fourth).next=NULL;

   traversal(head);
   return 0;
}