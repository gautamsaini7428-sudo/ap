#include<iostream>
using namespace std;
int rev(int x){
    int reve=0;
    while (x!=0)
    {int rem=x%10;
        reve=reve*10;
        reve=reve+rem;
        x/=10;
        
    }
    return reve;
    
    
}
int main(){
    int x;
    cin>>x;
  cout<< rev(x);

}