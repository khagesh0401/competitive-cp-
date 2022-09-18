#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int c=0,i=0;
        while(i<n)
        {
            if(s[i]==s[i+1])
            {
                c++;
                i+=2;
            }
            else
            {
                c++;
                i+=1;
            }
        }
        cout<<c<<endl;
    }
return 0;
}