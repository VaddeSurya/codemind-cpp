#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    {
        if(a>=35 && b>=35 && c>=35 && d>=35 && e>=35)
        {
            cout<<"PASSED";
        }
        else
        {
            cout<<"FAILED";
        }
    }
    return 0;
}