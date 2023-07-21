#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g;
    cin>>a>>b>>c>>d>>e>>f;
    g=(a+b+c+d+e)*100/500;
    if(g>=90)
    {
        cout<<"Grade A";
    }
    else if(g>=80)
    {
        cout<<"Grade B";
    }
    else if(g>=70)
    {
        cout<<"Grade C";
    }
    else if(g>=60)
    {
        cout<<"Grade D";
    }
    else if(g>=40)
    {
        cout<<"Grade E";
    }
    else
    {
        cout<<"Grade F";
    }
    
}