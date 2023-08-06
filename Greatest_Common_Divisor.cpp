#include<iostream>
using namespace std;
int main()
{
    int n,m,hcf,temp;
    cin>>n>>m;
    while(m!=0)
    {
    temp=m;
    m=n%m;
    n=temp;
    }
    hcf=n;
    cout<<hcf;
}