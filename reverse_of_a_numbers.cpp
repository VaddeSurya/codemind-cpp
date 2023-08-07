#include<iostream>
using namespace std;
int main()
{
    int n,dig,rev=0;
    cin>>n;
    while(n>0)
    {
        dig=n%10;
        rev=(rev*10)+dig;
        n/=10;
    }
    cout<<rev;
}