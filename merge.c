#include<stdio.h>
void mergesort(int a[], int n);
void merge(int left[], int leftsize, int right[], int rightsize, int a[], int n);
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
mergesort(a,n);
printf("after merge sort");
for(i=0;i<n;i++){
    printf("%d",a[i]);
}
return 0;
}

void mergesort(int a[], int n){
int mid=n/2;
if(n<2){
    return -1;
}
int leftsize=mid;
int rightsize=n-mid;
int left[leftsize];
int right[rightsize];
int i;
for(i=0;i<mid;i++){
    left[i]=a[i];
}
for(i=0;i<rightsize;i++){
    right[i]=a[mid+i];
}
mergesort(left,leftsize);
mergesort(right,rightsize);
merge(left,leftsize,right,rightsize,a,n);
}

void merge(int left[], int leftsize, int right[], int rightsize, int a[], int n){
int i=0;
int j=0;
int k=0;
while(i<leftsize && j<rightsize){
    if(left[i]<right[j]){
        a[k]=left[i];
        i=i+1;
        k=k+1;
    }
    else if(left[i]>right[j]){
        a[k]=right[j];
        j=j+1;
        k=k+1;
    }
}
while(i<leftsize){
    a[k]=left[i];
    i=i+1;
    k=k+1;
}
while(j<rightsize){
    a[k]=right[j];
    j=j+1;
    k=k+1;
}
}


