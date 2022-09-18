#include<bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int n,k;
    cin>>n>>k;
    string a;
    cin>>a;

    int f,c=0;
    for(f=0;f<n/2;f++)
    {
        if(a[f]!=a[n-1-f])
        c++;
    }
    if(c<=k)
    {
        if(n%2==1)
        cout<<"yes";
        else if((k-c)%2==0)
        cout<<"yes";
        else
        cout<<"no";
    }
    else
    cout<<"no";
    cout<<endl;
}return 0;
}