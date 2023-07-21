#include<iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    {
        if(a=='V')
        {
            cout<<"Violet";
        }
        else if(a=='I')
        {
            cout<<"Indigo";
        }
        else if(a=='B')
        {
            cout<<"Blue";
        }
        else if(a=='G')
        {
            cout<<"Green";
        }
        else if(a=='Y')
        {
            cout<<"Yellow";
        }
        else if(a=='O')
        {
            cout<<"Orange";
        }
        else if(a=='R')
        {
            cout<<"Red";
        }
        else
        {
            cout<<"-1";
        }
    }
}