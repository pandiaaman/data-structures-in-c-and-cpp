#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 10
int front=-1;
int rear=-1;
int queue[SIZE];
void enqueue(int x){
if(rear==SIZE-1){
    if(front==0){
        printf("queue full");
        return;
    }
    else{
        rear=(rear+1)%SIZE;
        queue[rear]=x;
    }
}
else{
        if(front==-1){
            front=0;
        }
    rear=(rear+1)%SIZE;
    queue[rear]=x;
}
print();
}
int dequeue(){
if(front==rear){
    front=-1;
    rear=-1;
}
else if(front==-1){
    printf("underflow");
    return;
}
else{
    front=front+1;
}
print();
}

void print(){
if(front==-1){
    printf("empty");
}
else{
    int i;
    printf("queue is:\n");
    for(i=front;i<=rear;i++){
        printf("%d\t",queue[i]);
    }
    printf("\n");
}

}

int main(){
printf("enter values 1.enqueue 2. dequeue 3.quit");
int a,x,i;
while(1){
scanf("%d",&a);
if(a==1){
    printf("enter value");
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
