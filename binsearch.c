#include<stdio.h>
int main(){
int n;
printf("enter no of elements");
scanf("%d",&n);
int a[n];
int i;
printf("enter elements of array");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int j;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
            int temp;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("after sorting");
for(i=0;i<n;i++){
    printf("%d",a[i]);
}

int beg=0;
int end=n-1;

int k;
printf("enter element to be searched");
scanf("%d",&k);
while(beg<end){
  int mid=(beg+end)/2;
  if(a[mid]<k){
    beg=mid+1;
  }
  else if(a[mid]>k){
    end=mid;
  }
  else if(a[mid]==k){
    printf("element %d is present at %d",k,mid+1);
    break;

  }
}
return 0;

}
