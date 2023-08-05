#include<iostream>
using namespace std;
int main()
{
    int i,n,j,r,p;
    cin>>n>>j>>r;
    for(i=j;i<=r;i++)
    {
        p=n*i;
        cout<<n<<" x "<<i<<" = "<<p<<endl;
    }
}