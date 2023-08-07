#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,dig;
    cin>>n;
    int m=n;
    while(n!=0)
    {
        dig=n%10;
        rev=(rev*10)+dig;
        n/=10;
    }
    if(rev==m)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}