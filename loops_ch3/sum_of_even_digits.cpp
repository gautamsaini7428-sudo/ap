#include<iostream>
using namespace std;
int main(){
int x;
cout<<"enter a number ";
cin>>x;
int sum=0;
while (x!=0)
{
    int rem=x%10;
    x=x/10;
    if (rem%2==0)
    {
        sum=sum+rem;
    }
    
}
cout<<sum; 

}