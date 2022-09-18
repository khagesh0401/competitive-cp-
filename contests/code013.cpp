#include<bits/stdc++.h>
using namespace std;

int main()
{
    int long t;
    cin>>t;
    while(t--)
    {
       float x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;

           float a=0,b=0;
           a=y1/x1;
           b=y2/x2;
           if(a<b)
           cout<<"-1"<<endl;
           else if(a==b)
           cout<<"0"<<endl;
           else
           cout<<"1"<<endl;
    }
return 0;
}