#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    bool flag=false;
    cin>>n>>k;
   string a;
   cin>>a;
   for(int i=0;i<n;i++)
   {if(a[i]==k)
     cout<<"1"<<endl;
    else
    flag=false;
    }
    if(flag==false)
    cout<<"-1"<<endl;
return 0;}