#include<iostream>
#include<iomanip>
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
    float aver = sum1 / static_cast<float>(n);
    cout<<fixed<<setprecision(2);
    cout<<aver;
    
}