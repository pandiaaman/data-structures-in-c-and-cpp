#include<stdio.h>
int main(){

printf("enter no of elements");
int n;
scanf("%d",&n);
int a[n];
int i;
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int k;
printf("enter element to find");
scanf("%d",&k);
for(i=0;i<n;i++){
    if(a[i]==k){
        printf("value %d is present at %d",k,i+1);
        break;
    }
    else{
        continue;
    }
    return 0;
}

}
