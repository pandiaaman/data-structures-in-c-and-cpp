#include<stdio.h>
int main(){
int n;
printf("enter no of elements");
scanf("%d",&n);
int a[n];
int i;
printf("enter array elements");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int hole;
int value;
for(i=1;i<n;i++){
    hole=i;
    value=a[i];
    while(hole>0 && a[hole-1]>value){
        a[hole]=a[hole-1];
        hole=hole-1;
    }
    a[hole]=value;
}
printf("after insertion sort");
for(i=0;i<n;i++){
    printf("%d",a[i]);
}
return 0;
}
