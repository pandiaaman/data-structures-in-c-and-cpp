#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
};
void insertbeg(int x);
void print();
void insertn(int nval,int pos);
void deleten(int k);
void insertend(int valend);
void reverse();
struct Node* head;




int main(){
head=NULL;
int n,x;
printf("enter number of elements in linked list to insert in beginning");
scanf("%d",&n);
int i;
for(i=0;i<n;i++){
    printf("enter value");
    scanf("%d",&x);
    insertbeg(x);
    print();
}
printf("\ninsert at nth position");
printf("\nenter data and position ");
int pos,nval;
scanf("%d %d",&nval,&pos);
insertn(nval,pos);

printf("\n delete a node at nth position");
int k;
scanf("%d",&k);
deleten(k);

printf("\n insert at end position");
int valend;
scanf("%d",&valend);
insertend(valend);
printf("let us reverse the linked list");
reverse();
return 0;
}




void insertbeg(int x){
struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=x;
temp->next=head;
head=temp;
}

void print(){
struct Node *temp=head;
printf("list is:  ");
while(temp!=NULL){
    printf("%d",temp->data);
    temp=temp->next;
}
printf("\n");
}

void insertn(int nval,int pos){
    struct Node *tempn=(struct Node*)malloc(sizeof(struct Node));
    tempn->data=nval;
    if(pos==1){
        tempn->next=head;
        head=tempn;
        print();
        return;
    }
struct Node* temp2=head;
int i;
for(i=0;i<pos-2;i++){
    temp2=temp2->next;
}
tempn->next=temp2->next;
temp2->next=tempn;
print();
}

void deleten(int k){
if(k==1){
    head=head->next;
    print();
    return;
}
struct Node *temp1=head;
int i;
for(i=0;i<k-2;i++){
  temp1=temp1->next;
}
temp1->next=temp1->next->next;
print();
}


void insertend(int valend){
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=valend;
temp->next=NULL;
if(head==NULL){head=temp;}
struct Node* temp1=head;
while(temp1->next!=NULL){
    temp1=temp1->next;
}
temp1->next=temp;
print();
}

void reverse(){
struct Node *current;
struct Node *next;
struct Node *prev;
current=head;
prev=NULL;
while(current!=NULL){
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
}
head=prev;
print();
}
