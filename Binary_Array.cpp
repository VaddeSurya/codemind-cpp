#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,n;
    cin>>n;
    bool all_bin=false;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0 || arr[i]==1)
        {
            all_bin=true;
        }
        else{
            all_bin=false;
        }
    }
    if(all_bin)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}