#include<iostream>
using namespace std;
int main()
{
    int n,i,arr[100],se,res=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>se;
    for(i=0;i<n;i++)
    {
        if(se==arr[i])
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