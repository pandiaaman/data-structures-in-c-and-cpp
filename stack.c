#include<stdio.h>
#include<stdlib.h>
int top=-1;
int main(){
int n;
printf("enter total no of elements in array");
scanf("%d",&n);
int a[n];
while(1){
printf("enter what you want to do? 1.push 2. pop 3. isempty 4. print 5. exit");
int k;
scanf("%d",&k);
if(k==1){
        int x;
    printf("enter element to be pushed");
    scanf("%d",&x);
    if(top==n){
        printf("array full");
        return;
    }
    top=top+1;
    a[top]=x;
}
else if(k==2){
        if(top==-1){
            printf("empty array");
            return;
        }
    top=top-1;
}
else if(k==3){
    if(top==-1){
        printf("empty");
    }
    else{
        printf("not empty");
    }
}
else if(k==4){
int i;
for(i=0;i<=top;i++){
    printf("%d",a[i]);
}
}
else if(k==5){
    break;
}
}
return 0;

}
