#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,n,sum = 0,aver,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    aver=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=aver)
        {
            count+=1;
        }
    }
    cout<<count;
}