#include<iostream>
using namespace std;
int main()
{
    int arr[100],n,i,odd=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
    if(i%2!=0)
    {
        odd+=arr[i];
    }
    }
    cout<<odd;
    
}