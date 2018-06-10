#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
};
struct Node *head;
void push(int data);
void print(struct Node *head);
void pop();


int main(){
head=NULL;

int n,x,i;
printf("enter no of elements to be pushed");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("enter values");
    scanf("%d",&x);
    push(x);
    print(head);
}
printf("enter no of times you want to pop");
scanf("%d",&n);
for(i=0;i<n;i++){
    pop();
    print(head);
}
return 0;
}

void push(int data){
struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=data;
temp->next=NULL;
if(head==NULL){
    head=temp;
}
temp->next=head;
head=temp;
}

void pop(){
    if(head==NULL){printf("empty stack"); return;}
head=head->next;
}

void print(struct Node *head){
struct Node *temp;
temp=head;
if(head==NULL){return;}
print(temp->next);
printf("%d",temp->data);

}
