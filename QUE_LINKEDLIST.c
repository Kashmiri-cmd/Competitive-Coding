//IMPLEMENTING QUEUE USING LINKED LIST
#include<stdio.h>
#include<stdlib.h>
struct node{
   int data; struct node *next;           
};
struct node *f=NULL; struct node *r=NULL;
void enqueue(int val){
   struct node *ptr=(struct node*)malloc(sizeof(struct node));
   if(ptr==NULL){
      printf(" queue is full\n ");
   }
   else{
      (*ptr).data=val; (*ptr).next=NULL;
      if(f==NULL){
         f=r=ptr;
      }
      else{
       (*r).next=ptr;
       r=ptr;
      } printf("enqued element: %d\n",val);
   }
}
int dequeue(){
   int val=-1;
   if(f==NULL){
      printf("queue is empty!\n");
   }
   else{
      struct node *p=f;
      val=(*f).data;
      f=(*f).next;
      free(p);
      return val;
   }
}
int main(){
   enqueue(11);
   enqueue(12);   
   enqueue(13);
   enqueue(14);
   enqueue(15);
   printf("dequed element: %d\n",dequeue());
   printf("dequed element: %d\n",dequeue());
   printf("dequed element: %d\n",dequeue());
   printf("dequed element: %d\n",dequeue());
   printf("dequed element: %d\n",dequeue());
   return 0;
}