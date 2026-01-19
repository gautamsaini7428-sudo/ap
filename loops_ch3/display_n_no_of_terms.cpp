#include<iostream>
using namespace std;
int main(){
//an=a+(n-1)d
//1 3 5 7 9 ... d=2
cout<<"enter no of terms";
int x;
cin>>x;
for (int i = 1; i<=2*x-1; i+=2)
{
    cout<<i<<" ";
}

}