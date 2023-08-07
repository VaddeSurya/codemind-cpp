#include<iostream>
using namespace std;
int main()
{
    int arr[100],n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum1=0;
    for(i=0;i<n;i++)
    {
        sum1+=arr[i];
    }
    float aver;
    aver=sum1/n;
    int res=0;
    for(i=0;i<n;i++)
    {
        if(aver==arr[i])
        {
            res=1;
            break;
        }
    }
    if(res==1)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}