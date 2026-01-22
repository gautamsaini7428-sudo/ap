#include<iostream>
using namespace std;
int main(){
int x;
cout<<"enter number to check it is composite or not ";
cin>>x;
bool flag =true;//true is prime no
for (int i = 2; i <=x/2; i++)
{
    if (x%i==0)
    {
        flag=false;
        break;
    }
    
    
}
if (flag==true) cout<<" prme number";
else cout<<" composite number";

}