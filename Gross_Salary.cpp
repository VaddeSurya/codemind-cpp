#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    float gs;
    cin>>a;
    if(a<=10000)
    {
        gs=a+(0.8*a)+(0.2*a);
    }
    else if(a<=20000)
    {
        gs=a+(0.9*a)+(0.25*a);
    }
    else if(a>20000)
    {
        gs=a+(0.95*a)+(0.3*a);
    }
    cout << fixed << setprecision(2);
    cout<<gs;
}