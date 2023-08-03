#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int sum=0,dig,n,count=0,org;
    cin>>n;
    org=n;
    while(n!=0)
    {
        count++;
        n/=10;
    }
    n=org;
    while(n!=0)
    {
        dig=n%10;
        sum+=pow(dig,count);
        count--;
        n/=10;
    }
    if(sum==org)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}