#include<iostream>
using namespace std;                
int main(){
cout<<"enter an integer";
int x;
cin>>x;
for (int i = 1; i <=x; i++)
{
    if(i%2==0) {
    for (int j = 0; j<=i; j++){
    char ch=char('A'+j);
    cout<<ch;
    }
    }
    
        else{
            for (int j = 1; j<=i; j++)
            {
                /* code */
                cout<<j;
            }
            
        }
    
    cout<<endl;
}

}