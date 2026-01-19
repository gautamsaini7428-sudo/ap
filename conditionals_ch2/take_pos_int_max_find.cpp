#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"enter first number";
cin>>a;
cout<<"enter second number";
cin>>b;
cout<<"enter third number";
cin>>c;
if (a>b and a>c)
{
    cout<<"max is "<<a;
}
else if (b>a and b>c){
cout<<b<<" is max";
}
else{
cout<<c<<" is max";
}
}