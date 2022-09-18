#include<bits/stdc++.h>
using namespace std;

int main()
{
    int long t;
    cin>>t;
    while(t--)
    {
     string s;
     cin>>s;
        int c=0,d=0,i=0;

        while(i<s.length())
        {
            if(s[i]=='0')
             c++;
            else
             d++;
             i++;
        }
        if(c==d)
        cout<<c-d<<endl;
        else
        cout<<min(c,d)<<endl;
    }
    return 0;
}