#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x[n],y[n];
        for(int i=0;i<n;i++)
        {cin>>x[i]>>y[i];}
        sort(x,x+n);
        sort(y,y+n);
        int cx=0,cy=0;
        for(int i=0;i<n-1;i++)
        {if(x[i]==x[i+1])
        cx++;
        if(y[i]==y[i+1])
        cy++;}
        cout<<cx+cy<<endl;
    }
}