#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i=n*(n+1)/2){
            cout<<i<<endl;
        }
    }
    return 0;
}