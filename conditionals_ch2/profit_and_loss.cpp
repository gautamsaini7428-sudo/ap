#include<iostream>
using namespace std;
int main(){
cout<<"enter cost price";
int cp,sp;
cin>>cp;
cout<<"enter selling price";
cin>>sp;
if (sp>cp)
{
    cout<<"profit is "<< sp-cp;
}
if (cp>sp)
{
    cout<<"loss is "<< cp-sp;
}
if (cp==sp)
{
  cout<<"no profit no loss";
}






}