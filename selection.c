#include<stdio.h>
int main(){
printf("enter no of elements");
int n;
scanf("%d",&n);
int i,j;
int a[n];
printf("enter array elements");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
        int min=i;
    for(j=i;j<n;j++){
       if(a[j]<a[min]){
        min=j;
       }
    }
    int temp;
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
}
printf("after selection sort");
for(i=0;i<n;i++){
    printf("%d",a[i]);
}
return 0;
}
