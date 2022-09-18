//not passig testcase
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,c=0,j=0,i=0;
    bool flag=false;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {cin>>a[i];}
   for(i=0;i<n;i++)
    {for(j=i+1;j<n;j++)
    { 
        if((a[i] ^ a[j])%2!=0)
         {c++;
         flag=true;
          a[i]=(a[i] ^ a[j]);
          break;}
        else
         flag=false;
    }
    if(flag==true)
     break;
    }
    if(flag==true)
    {cout<<c<<endl;;
    cout<<i+1<<" "<<j+1<<endl;}
    else
     cout<<"-1"<<endl;
    } 
return 0;
}