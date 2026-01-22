#include<iostream>
using namespace std;int fact(int x){
    int factorial=1;
    if(x==0)return 1;
    for (int i = 1; i <=x; i++)
    {
        factorial*=i;

    }
    return factorial;

}
int ncr(int n,int r){
return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int x;
    cout<<"enter rows";
    cin>>x;
    
   
    for (int i = 0; i <=x; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            cout<<ncr(i,j)<<" ";
        }
        
        cout<<endl;
    }

}