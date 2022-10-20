//doubly linked list ,forward and backward
#include<stdio.h>
#include<stdlib.h>
struct node{
      int data;
      struct node *prev;
      struct node *next;           
};
void forwardTraversal(struct node *ptr){
  printf("%d ",(*ptr).data);
  ptr=(*ptr).next;
  while(ptr!=NULL){
   printf("%d ",(*ptr).data);
   ptr=(*ptr).next;
   } printf("\n");
}
void typicalbackwardTraversal(struct node *ptr){
  printf("%d ",(*ptr).data);
  ptr=(*ptr).prev;
  while(ptr!=NULL){
   printf("%d ",(*ptr).data);
   ptr=(*ptr).prev;
   } printf("\n");
}
void backwardTraversal(struct node *ptr){
  while((*ptr).next!=NULL){
   ptr=(*ptr).next;
  } //ptr is set to last element
  typicalbackwardTraversal(ptr);
}
int main(){
   struct node *n1=(struct node*)malloc(sizeof(struct node));
   struct node *n2=(struct node*)malloc(sizeof(struct node));
   struct node *n3=(struct node*)malloc(sizeof(struct node));
   struct node *n4=(struct node*)malloc(sizeof(struct node));
   struct node *n5=(struct node*)malloc(sizeof(struct node));
   //linking 
   (*n1).prev=NULL;(*n1).data=0;(*n1).next=n2;
   (*n2).prev=n1;(*n2).data=1;(*n2).next=n3;
   (*n3).prev=n2;(*n3).data=2;(*n3).next=n4;
   (*n4).prev=n3;(*n4).data=3;(*n4).next=n5;
   (*n5).prev=n4;(*n5).data=4;(*n5).next=NULL;
   printf("\nforward traversal: \n");
   forwardTraversal(n1);
   //typicalbackwardTraversal(n5);//passing last elem
   printf("\nbackward traversal: \n");
   backwardTraversal(n1);

   return 0;
}