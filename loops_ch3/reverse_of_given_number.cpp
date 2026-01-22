#include<iostream>
using namespace std;
int main(){
int x;
cout<<"enter a  number ";
cin>>x;
int rev=0;
while (x!=0)                                        //x=1234 rev 4321
//                                                 123 rem 4 rev 40 
{
    int rem =x%10;
    rev=rev*10;
    rev=rev +rem;
    x=x/10;
}
cout<<rev;

}