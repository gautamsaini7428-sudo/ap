#include<iostream>
using namespace std;
int fact(int x){
int factorial=1;
for (int i = 1; i <=x; i++)
{
    factorial*=i;
}
return factorial;
}
int main(){
    int n,r;
    cout<<"enter n";
    cin>>n;
    cout<<"enter r";
    cin>>r;
    int c=n-r;
    int a=fact(c);
    int ncr=fact(n)/a;
    ncr=ncr/fact(r);
    cout<<ncr;

}