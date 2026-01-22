#include<iostream>
using namespace std;
int main(){
int x;
cout<<"enter a number ";
cin>>x;                                     // x=-1344 rev 4431 
int rev=0;
int sum=0;

while (x!=0)
{
    int rem=x%10;
    rev=rev*10;
    rev=rev+rem;
    sum+=rem;
    x/=10;
}
cout<<rev<<endl;
cout<<sum;
}