#include<iostream>
using namespace std;
int main(){
int x;
cout<<"enter number ";
cin>>x;

int sum=0;

while (x!=0)
{
  int  rem=x%10;
    x/=10;
    sum=sum+rem;
}
cout<<sum;
}