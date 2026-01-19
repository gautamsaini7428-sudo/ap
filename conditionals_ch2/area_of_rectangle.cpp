#include<iostream>
using namespace std;
int main(){
int length,breadth;
cout<<"enter length :"<<"enter breadth :";
cin>>length >>breadth ;
cout<<"area of rectangle is "<<length*breadth<<endl;
int c=2*(length+breadth);
cout<<"perimeter of rectangle is "<<c<<endl;
if (c>length*breadth)
{
    cout<<"perimeter is greater than area";
}


}