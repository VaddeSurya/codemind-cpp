#include<iostream>
using namespace std;
int main()
{
    int n,arr[100],i,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<sum;
}