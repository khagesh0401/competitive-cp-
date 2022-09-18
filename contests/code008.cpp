#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n,c=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(s[(i | j)]==s[(i & j)])
                 c+=1;
            }
        }
        cout<<c<<endl;
    }
return 0;}