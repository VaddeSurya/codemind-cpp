#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cin>>n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        cout<<"PERFECT";
    }
    else if(sum>n)
    {
        cout<<"ABUNDANT";
    }
    else
    {
        cout<<"DEFICIENT";
    }
}