#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"Monday";
    }
    else if(n==2)
    {
        cout<<"Tuesday";
    }
    else if(n==3)
    {
        cout<<"Wednesday";
    }
    else if(n==4)
    {
        cout<<"Thursday";
    }
    else if(n==5)
    {
        cout<<"Friday";
    }
    else if(n==6)
    {
        cout<<"Saturday";
    }
    else
    {
        cout<<"Invalid input";
    }
}