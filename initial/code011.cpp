//codeforce
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cin>>w;
    while(w--)
    {
        int x=0; string s;
        cin>>s;
        if(s.length()>10)
        {x = s.length()-2;
        cout<<s[0];cout<<x;cout<<s[s.length()-1]<<endl;}
        else
        cout<<s<<endl;
    }
return 0;
}