#include<iostream>
using namespace std;
int main(){
int x;
cout<<"enter percentage of a student";
cin>>x;
if (x>=81 and x<=100)
{
    cout<<"very good";
}

else if (x>=61 and x<=80)
{
    cout<<"good";
}
else if (x>=41 and x<=60)
{
    cout<<"average";
}
else if (x>0 and x<=40){
cout<<"fail";
}
else {
    cout<<"invalid";
}


}