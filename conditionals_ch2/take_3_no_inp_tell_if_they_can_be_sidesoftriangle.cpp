#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter 1 side of traingle";
cin>>a;
cout<<"Enter 2 side of traingle";
cin>>b;
cout<<"Enter 3 side of traingle";
cin>>c;
if (a+b>c and b+c>a and a+c>b)
{
    cout<<"yes,it can be the sides of a triangle";
}
else{
    cout<<"no,they can't be";
}


}