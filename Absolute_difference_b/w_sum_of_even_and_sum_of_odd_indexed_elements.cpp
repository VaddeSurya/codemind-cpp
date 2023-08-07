#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i,arr[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int esum=0,osum=0;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            esum+=arr[i];
        }
        else
        {
            osum+=arr[i];
        }
    }
    cout<<abs(esum-osum);
}