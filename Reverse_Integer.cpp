#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,dig;
    cin>>n;
    int revneg=false;
    if(n<0)
    {
        revneg=true;
    }
    n=abs(n);
    while(n!=0)
    {
        dig=n%10;
        rev=(rev*10)+dig;
        n/=10;
    }
    if(revneg)
    {
        rev=-rev;
    }
    cout<<rev;
}