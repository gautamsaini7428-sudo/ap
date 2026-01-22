#include<iostream>
using namespace std;
int main(){
int x;
cout<<"enter number to check it is composite or not ";
cin>>x;
for (int i = 2; i <=x/2; i++)
{
    if (x%i==0)
    {
        cout<<x<< " is composite";
        break;
    }
    else cout<<"it is not a composite number";
    
}

}