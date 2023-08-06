#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        sum++;
        }
    }
    if(sum==2)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Not Prime";
    }
}