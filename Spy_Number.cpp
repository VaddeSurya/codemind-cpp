#include<iostream>
using namespace std;
int main()
{
    int n,dig,sum=0,pro=1,res;
    cin>>n;
    while(n>0)
    {
        dig=n%10;
        sum+=dig;
        pro*=dig;
        n/=10;
    }
    if(sum==pro)
    {
        cout<<"Spy Number";
    }
    else
    {
        cout<<"Not Spy Number";
    }
}