#include<iostream>
#include<conio.h>
#include<string.h>
#include<stack>
using namespace std;
void reversestring(char *c,int n);

int main()
{
    char str[80];
    cout<<"\n enter string:";
    cin>>str;
    int n=strlen(str);
    reversestring(str,n);
    cout<<str;
return 0;
}
void reversestring(char *c,int n){
stack<char> S;
int i;
for(i=0;i<n;i++){
    S.push(c[i]);
}
for(i=0;i<n;i++){
c[i]=S.top();
S.pop();
}

}
