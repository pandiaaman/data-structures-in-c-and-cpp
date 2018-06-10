#include<stdio.h>
int main(){
int n;
printf("enter no of elements");
scanf("%d",&n);
int i;
int a[n];
printf("enter array elements");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int j;
for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            int temp;
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
printf("after bubble sort");
for(i=0;i<n;i++){
    printf("%d",a[i]);
}
}
