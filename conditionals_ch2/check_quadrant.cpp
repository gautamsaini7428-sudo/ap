#include<iostream>
using namespace std;
int main(){
int x,y;
cout<<"Enter point of x axis ";
cin>>x;
cout<<"Enter point of y axis ";
cin>>y;
if (x>=0 and y>=0)
{
    cout<<"first quadrant";
}
else if (x<0 and y>=0)
{
    cout<<"second quadrant";
}
else if (x<0 and y<0){
    cout<<"third quadrant";
}
else{
    cout<<"fourth quadrant";
}



}