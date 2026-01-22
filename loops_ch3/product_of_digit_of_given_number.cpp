#include<iostream>
using namespace std;
int main(){
int x;
cout<<"enter a number ";
cin>>x;
int rem;
int pro=1;
while (x!=0)
{
    rem=x%10;
    x/=10;
    pro=rem*pro;
}
cout<<pro;
}