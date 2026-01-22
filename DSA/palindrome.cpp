#include<iostream>
#include<climits>
using namespace std;
bool ispalindrome(int x){
    if (x<0) return false;
int original =x;
int rev=0;
while (x!=0)
{ int rem=x%10;
    if (rev>INT_MAX/10||rev==INT_MAX/10&& rem>7)return 0;
    if (rev<INT_MIN/10||rev==INT_MIN/10 and rem <-8)return 0;
    rev=rev*10;
    rev=rev+rem;
    x/=10;
}

return original==rev;
}

int main(){

}