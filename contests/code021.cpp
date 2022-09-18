#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,c=0;
        cin>>n>>x;
        int a[n];
        sort(a,a+n);
     
        for(int i=1;i<=n;i++)
        {cin>>a[i];
         if(a[i]<=x)
          c=a[i];}
          cout<<c<<endl;
     
    }
return 0;}