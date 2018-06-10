#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int> S;
cout<<"enter no of elements to be entered";
int n;
cin>>n;
int i;
for(i=0;i<n;i++){
    cout<<"enter value";
    int x;
    cin>>x;
    S.push(x);
}
cout<<"pop no of elements";
cin>>n;
for(i=0;i<n;i++){
    cout<<S.top();
    S.pop();
}
return 0;
}
