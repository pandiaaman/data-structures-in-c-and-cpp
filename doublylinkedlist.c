#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* next;
struct Node* prev;
};
struct Node* head;
void insertbeg(int val);
void insertend(int data);
void printrevusingprev();
void print();


int main(){
head=NULL;
printf("enter no of values to be entered in the doubly linked list");
int n,x,i;
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("enter value");
    scanf("%d",&x);
    insertbeg(x);
    print();
}
printf("enter no of values to be entered in the end of doubly linked list");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("enter value");
    scanf("%d",&x);
    insertend(x);
    print();
}
printf("printing the reverse of the linked list using the prev method");
printrevusingprev();
return 0;
}

void insertbeg(int val){
struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=val;
temp->next=NULL;
temp->prev=NULL;
if(head==NULL){
    head=temp;
}
else{
    temp->next=head;
    head->prev=temp;
    head=temp;
}
}

void print(){
struct Node *temp=head;
if(head==NULL){
    printf("list empty");
}
else{
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
printf("\n");
}

void printrevusingprev(){
struct Node *temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
while(temp!=head){
    printf("%d",temp->data);
    temp=temp->prev;
}
printf("%d",head->data);
printf("\n");
}

void insertend(int data){
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=data;
temp->next=NULL;
temp->prev=NULL;
if(head==NULL){
    head=temp;
}
else{
    struct Node *temp1=head;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp;
    temp->prev=temp1;
}
}
