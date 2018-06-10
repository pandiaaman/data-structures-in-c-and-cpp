#include<iostream>
#include<string.h>
#include<conio.h>
#include<stack>
using namespace std;
void evaluate(char *a,int n);
int main(){
 char a[100];
 cout<<"enter postfix expression";
 cin>>a;
 int n=strlen(a);
 evaluate(a,n);
 return 0;
}

void evaluate(char *a,int n){
stack<char>S;
int i;
for(i=0;i<n;i++){
if(a[i]!='+'||a[i]!='-'||a[i]!='*'||a[i]!='/'){
        S.push(a[i]);
    }

else if(a[i]=='+'){
        char a1=S.top();
        S.pop();
        char a2=S.top();
        S.pop();
        char p=a2+a1;
        S.push(p);
    }
    else if(a[i]=='-'){
        int a1=S.top();
        S.pop();
        int a2=S.top();
        S.pop();
        int p=a2-a1;
        S.push(p);
    }
    else if(a[i]=='*'){
        int a1=S.top();
        S.pop();
        int a2=S.top();
        S.pop();
        int p=a2*a1;
        S.push(p);
    }
    else if(a[i]=='/'){
        int a1=S.top();
        S.pop();
        int a2=S.top();
        S.pop();
        int p=a2/a1;
        S.push(p);
    }
}

while(1){
        if(S.empty()){
            break;
        }
        else{
cout<<S.top();S.pop();}}
}
