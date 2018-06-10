#include<stdio.h>
int main(){
int n;
printf("enter no of elements");
scanf("%d",&n);
int a[n]={'\0'};
while(true){
    printf("choose among following:\n 1. check if list is empty\n 2. is Full? \n 3. insert to end\n 4. delete to end \n");
    printf("5. insert at beg \n 6. delete at beg \n7. insert at nth pos\n 8. delete at nth posn \n9.search element \n10.print array");
    int k;
    scanf("%d",&k);
    if(k==1){
        isempty(a);
        continue;
    }
    if(k==2){
        isfull(a);
        continue;
    }
    if(k==3){
            int p;
    printf("enter value to be added");
    scanf("%d",&p);
        insertend(a,p);
        continue;
    }
    if(k==4){
        deleteend(a);
        continue;
    }
    if(k==5){
        int q;
    printf("enter value to be added");
    scanf("%d",&q);
        insertbeg(a,q);
        continue;
    }
    if(k==6){
        deletebeg(a);
        continue;
    }
    if(k==7){
        int r,l;
        printf("enter value and position");
        scanf("%d %d",&r,&l);
        insertn(a,r,l);
    }
    if(k==8){
        int l1;
        printf("enter position to be deleted");
        scanf("%d",&l1);
        deleten(a,l1);
        continue;
    }
    if(k==9){
        int j;
        printf("enter element to be searched");
        scanf("%d",&j);
        search(a,j);
    }
    if(k==10){
        display(a);
    }
    if(k==0){
        break;
        return -1;
    }
}
return 0;
}

void isempty(int a[]){
if(a[0]=='\0'){
    printf("array is empty");
}
}
void isfull(int a[]){
if(a[n-1]!='\0'){
    printf("array is full");
}
}
void insertend(int a[], int p){
int i;
while(a[i]!='\0'){
    i=i+1;
}
a[i]=p;
}
void deleteend(int a[]){
int i;
while(a[i]!='\0'){
    i=i+1;
    j=i-1;
}
a[j]='\0';
}
void insertbeg(int a[],int p){
int i;
for(i=1;i<n;i++){
    a[i]=a[i-1];
}
a[0]=p;
}
void deletebeg(int a[]){
int i;
for(i=0;i<n-1;i++){
    a[i]=a[i+1];
}
}
void display(int a[]){
int i;
while(a[i]!='\0'){
    printf("%d",a[i]);
}
}
