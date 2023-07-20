#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n<m)
    {
        cout<<"Profit";
    }
    else if(n>m)
    {
        cout<<"Loss";
    }
    else
    {
        cout<<"No profit and No loss";
    }
    return 0;
}