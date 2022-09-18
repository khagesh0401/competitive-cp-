#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int u=0,l=0;
     for(int i=0;i<s.size();i++)
     {
         if(isupper(s[i]))
          u++;
         else
          l++;
     }
      if(u>l)
       {for(int i=0;i<s.size();i++)
       {
           if(islower(s[i]))
            s[i]-=32;

       }}
       else
        {for(int i=0;i<s.size();i++)
        {
            if(isupper(s[i]))
            s[i]+=32;
        }}
        cout<<s<<endl;
return 0;
}