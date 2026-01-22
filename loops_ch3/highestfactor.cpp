#include<iostream>
using namespace std;
int main(){
int x;
cout<<"enter integer";
cin>>x;
int f=1;
for (int i = 1; i <x; i++)
{
    if (x%i==0)
    {
        f=i;
    }
    
}
cout<<f;
}