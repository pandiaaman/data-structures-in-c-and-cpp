#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node* insert(struct Node*root, int data);
void search(struct Node* root,int key);
int findmin(struct Node* root);
int findmax(struct Node* root);
void printinorder(struct Node* root);
void printpreorder(struct Node* root);
void printpostorder(struct Node* root);
int isbinary(struct Node* root);
struct Node* deletenode(struct Node* root,int data);
struct Node* findminnode(struct Node* root);

struct Node{
int data;
struct Node *left;
struct Node *right;
};

int main(){
struct Node *root;
root=NULL;
printf("enter what you would like to do?");
printf("1enter no 2find min 3search number 4find max 5find height 6in order print 7pre order 8 postorder 9 isbinary 10 delete node");
int i,a;
while(1){
    scanf("%d",&a);
    if(a==1){
            int data;
    printf("enter data");
    scanf("%d",&data);
        root=insert(root,data);
        printf("inserted");
    }
    else if(a==2){
     int p=findmin(root);
printf("%d",p);
    }
    else if(a==3){
        int key;
        printf("enter number to be searched");
        scanf("%d",&key);
       search(root,key);

    }
    else if(a==4){
        int p=findmax(root);
printf("%d",p);
    }
    else if(a==5){
            int h;
       h= findheight(root);
    printf("%d",h);

    }
    else if(a==6){
        printinorder(root);
    }
     else if(a==7){
        printpreorder(root);
    }
     else if(a==8){
        printpostorder(root);
    }
    else if(a==9){
        int q=isbinary(root);
        printf("%d",q);
    }
    else if(a==10){
        printf("enter data");
        int t;
        scanf("%d",&t);
       root= deletenode(root,t);
    }
}
return 0;
}

struct Node* insert(struct Node* root, int data){
struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=data;
temp->left=NULL;
temp->right=NULL;
if(root==NULL){
    root=temp;
}
else if(data<=root->data){
    root->left=insert(root->left,data);
}
else{
    root->right=insert(root->right,data);
}

return root;

}
void search(struct Node* root,int key){
if(root==NULL){
    printf("not found");return;
}
else if(root->data==key){
    printf("found"); return;
}
else if(key<=root->data){
     search(root->left,key);
}
else{
     search(root->right,key);
}
}
int findmin(struct Node* root){
    if(root==NULL){
        printf("error");
        return -1;
    }
else if(root->left==NULL){
    return root->data;
}

   findmin(root->left);
}

struct Node* findminnode(struct Node* root){
    if(root==NULL){
        printf("error");
        return -1;
    }
else if(root->left==NULL){
    return root;
}

   findmin(root->left);
}
int findmax(struct Node* root){
    if(root==NULL){
        printf("error");
        return -1;
    }
else if(root->right==NULL){
    return root->data;
}
findmax(root->right);
}

int findheight(struct Node* root){
    if(root==NULL){
        return -1;
    }
    int leftheight=findheight(root->left);
    int rightheight=findheight(root->right);
int height= leftheight>rightheight?findheight(root->left):findheight(root->right);
return (height+1);
}

void printinorder(struct Node* root){
if(root==NULL){
    return;
}
printinorder(root->left);
printf("%d",root->data);
printinorder(root->right);
}

void printpreorder(struct Node* root){
if(root==NULL){
    return;
}
printf("%d",root->data);
printinorder(root->left);
printinorder(root->right);
}
void printpostorder(struct Node* root){
if(root==NULL){
    return;
}
printinorder(root->left);
printinorder(root->right);
printf("%d",root->data);
}

int isbinary(struct Node* root){
if(root->left==NULL&&root->right==NULL){
    return;
}

if(root->data<root->left->data){
    printf("not binary search");
    return -1;
}
else if(root->data>root->right->data){
    printf("not binary search");
    return -1;
}
else{
    return 1;
}
isbinary(root->left);
isbinary(root->right);
}

struct Node* deletenode(struct Node* root,int data){
if(root==NULL){
    return root;
}
else if(data<root->data){
    root->left=deletenode(root->left,data);
}
else if(data>root->right){
    root->right=deletenode(root->right,data);
}
else{

    if(root->left==NULL && root->right==NULL){
        free(root);
        root=NULL;

    }
    else if(root->left==NULL){
        struct Node* temp=root;
        root=root->right;
        free(temp);
    }
    else if(root->right==NULL){
        struct Node* temp=root;
        root=root->left;
        free(temp);
    }
    else{
        struct Node* temp=findminnode(root->right);
        root->data=temp->data;
        root->right=deletenode(root->right,temp->data);
    }
}
return root;
}
