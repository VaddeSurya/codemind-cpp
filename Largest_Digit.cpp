#include<iostream>
using namespace std;
int main()
{
    int n,dig,lag=0;
    cin>>n;
    while(n>0)
    {
        dig=n%10;
        if(dig>lag)
        {
            lag=dig;
        }
        n/=10;
    }
    cout<<lag;
    
}