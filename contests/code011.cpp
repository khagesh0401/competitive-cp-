#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int long long n,sum=0,pref=0,ans=0;
        cin>>n;

            int long long a[n];
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
                sum+=a[i];
            }
             ans=sum;
                for(int i=0;i<n;i++)
                {
                    pref=pref+a[i];
                    int long long suf=sum-pref;

                    int long long req=max(suf,pref);
                     ans=min(ans,req);
                }

                    cout<<ans<<endl;
    }
return 0;
}