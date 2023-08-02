#include<iostream>
using namespace std;
int main()
{
    int n,dig,sum=0;
    cin>>n;
    while(sum!=1 && sum!=4)
    {
        sum=0;
        while(n!=0)
        {
            dig=n%10;
            sum+=dig*dig;
            n/=10;
        }
        n=sum;
    }
    if(sum==1)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}