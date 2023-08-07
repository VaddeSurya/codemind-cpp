#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool alleven=true;
    bool allodd=true;
    while(n!=0)
    {
        int dig=n%10;
        if(dig%2==0){
            allodd=false;
        }
        else
        {
            alleven=false;
        }
        n/=10;
    }
    if(alleven)
    {
        cout<<"Even";
    }
    else if(allodd)
    {
        cout<<"Odd";
    }
    else
    {
        cout<<"Mixed";
    }
}
