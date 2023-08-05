#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%3==1)
    {
        cout<<"HUGE";
    }
    else if(n%3==0)
    {
        cout<<"NORMAL";
    }
    else
    {
        cout<<"SMALL";
    }
}