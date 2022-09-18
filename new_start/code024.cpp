#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,k;
        cin>>n>>k;
        string s;
        int c=0;
        cin>>s;

            for(int i=1;i<=n/2;i++)
            {
                if(s[i]!=s[n-i+1])
                 c++;
            }
cout<<"case #"<<i<<": ";
                if(c>k)
                 cout<<c-k<<endl;
                else if(k>c)
                 cout<<k-c<<endl;
                else 
                 cout<<"0"<<endl;    
    }
return 0;
}
//not working properly