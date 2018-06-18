#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void print();
void enqueue(int a);
void dequeue();

struct Node{
int data;
struct Node* next;
};
struct Node *front;
struct Node *rear;
int main(){
front=NULL;
rear=NULL;
    printf("enter values 1.enqueue 2. dequeue 3.quit");
    int a,x,n;
    while(1){
        scanf("%d",&a);
        if(a==1){
            printf("enter data");
            scanf("%d",&x);
            enqueue(x);
        }
        if(a==2){
            dequeue();
        }
        if(a==3){
            break;
        }
    }
    return 0;
}

void enqueue(int a){
struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=a;
temp->next=NULL;
if(front==NULL && rear==NULL){
rear=temp;
front=temp;
rear->next=NULL;
}
else{
    rear->next=temp;
    rear=temp;
    rear->next=NULL;
}
     print();
}

void dequeue(){
    struct Node* temp=front;
    int x=front->data;
    printf("\ndequeued: %d\n",x);
front=front->next;
free(temp);
     print();
}

void print(){
    printf("printing");
struct Node* temp=front;
while(temp!=NULL){
    printf("%d",temp->data);
    temp=temp->next;
}
printf("\n");
}

