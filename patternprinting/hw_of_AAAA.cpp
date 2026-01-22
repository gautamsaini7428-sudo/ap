#include<iostream>
using namespace std;
int main(){
int x;
cout<<"enter a number";
cin>>x;
for (int i = 0; i < x; i++)
{
    char a =char(65 +i);

    for (int j = 0; j<x; j++)
    {
        cout<<a;
    }
    cout<<endl;
    
}

}