#include<iostream>
using namespace std;
int main(){
int x;
cout<<"enter a number";
cin>>x;
for (int i = 0; i < x; i++)
{
    int a=1;

    for (int j = 0; j<x; j++)
    {
        cout<<char(a+64);
        a++;
    }
    cout<<endl;
    
}

}