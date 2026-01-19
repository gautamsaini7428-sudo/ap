#include<iostream>
using namespace std;
int main(){
int x,y;
char op;
cout<<"enter a number 1";
cin>>x;
cout<<"enter number second";
cin>>y;
cin>>op;
switch (op)
{
case  '+':
    cout<<x+y;
    break;  
    case '-':
    cout<<x-y;
    break;  
    case '*':
    cout<<x*y;
    break;  
    case '/':
    cout<<x/y;
    break;  


default:
cout<<"invalid operator";
    break;
}
}