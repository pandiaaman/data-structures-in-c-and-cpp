#include<iostream>
#include<conio.h>
#include<string.h>
#include<stack>
using namespace std;
void balance(char *a, int n);
int main(){
char a[100];
cin>>a;
int n=strlen(a);
balance(a,n);
return 0;
}

void balance(char *a, int n){
stack<char> S;
int i;
for(i=0;i<n;i++){
    if(a[i]=='('||a[i]=='['||a[i]=='{'){
        S.push(a[i]);
       }
       else if(a[i]==')'&&S.top()=='('){
        S.pop();
       }
       else if(a[i]=='}'&&S.top()=='{'){
        S.pop();
       }
       else if(a[i]==']'&&S.top()=='['){
        S.pop();
       }
        else if(a[0]==')'||a[0]==']'||a[0]=='}'){
        cout<<"unbalanced";
        return;
        }

}
if(S.empty()){
    cout<<"balanced"<<endl;
}
else{
    cout<<"unbalanced"<<endl;
}
}
