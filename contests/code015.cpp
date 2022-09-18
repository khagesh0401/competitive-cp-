#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

        while(t--)
        {
            int n;
            cin>>n;

                if(n%2!=0)
                {
                    for(int i=1;i<=n;i++)
                    {cout<<i<<" ";}
                    cout<<endl;
                }
                else
                 {
                     if(n>=4)
                     {cout<<"2 3 1 4 ";
                     for(int i=5;i<=n;i++)
                     {
                         cout<<i<<" ";
                     }}
                     cout<<endl;
                }
        }
return 0;
}