#include<iostream>
using namespace std;
int main(){
//take a positive interger and tell if it is even and odd
int x;
cout<<"enter an integer to check it is even and odd :";
cin>>x;
if (x%2==0)
{
    cout<<x<<" is even ";
}
else{
    cout<<x<<"odd number";
}
}