#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node* next;
};
struct Node* insertend(struct Node *head,int data);
struct Node* insertbeg(struct Node *head, int data);
void print(struct Node *head);
void printrecursion(struct Node *p);
void printrecursionreverse(struct Node *p);
struct Node* reverserecursion(struct Node *p);

int main(){
struct Node *head;//head is defined as a local variable and hence we need to pass head as a attribute in every function
head=NULL;
int n,x;
printf("enter no of elements to be entered in the ending of the linked list");
scanf("%d",&n);
int i;
for(i=0;i<n;i++){
    printf("enter data to be inserted");
    scanf("%d",&x);
    head=insertend(head,x);
    print(head);
}
printf("enter no of elements to be inserted at beginning of the linked list");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("enter value");
    scanf("%d",&x);
    head=insertbeg(head,x);
    printrecursion(head);
}
printf("let us print linked list in reverse without reversing it actually");
printrecursionreverse(head);

printf("well well well let us now actually reverse the linked list using recursion");
head=reverserecursion(head);
print(head);
return 0;
}

void print(struct Node *head){
printf("List is:");
while(head!=NULL){
    printf("%d",head->data);
    head=head->next;
}
printf("\n");
}

void printrecursion(struct Node *p){
if(p==NULL){
    return;
}
printf("%d",p->data);
printrecursion(p->next);
}

void printrecursionreverse(struct Node *p){
if(p==NULL){
    return;
}

printrecursionreverse(p->next);
printf("%d",p->data);
}

struct Node* insertend(struct Node *head, int data){
struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=data;
temp->next=NULL;

if(head==NULL){
   head=temp;
}
else{
        struct Node *temp1=head;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp;
}
return head;
}

struct Node* insertbeg(struct Node *head, int data){
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=data;
temp->next=NULL;
if(head==NULL){
    head=temp;
}
else{
    temp->next=head;
    head=temp;
}
};

struct Node* reverserecursion(struct Node *head){
    struct Node* p= head;
if(p->next==NULL){
    head=p;
    return;
}
reverserecursion(p->next);
struct Node *q=p->next;
q->next=p;
p->next=NULL;

}
