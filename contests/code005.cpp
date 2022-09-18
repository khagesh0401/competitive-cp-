#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        c=21-(a+b);
        if(c>10 || c<1)
         cout<<"-1"<<endl;
        else
         cout<<c<<endl;
    }
return 0;}