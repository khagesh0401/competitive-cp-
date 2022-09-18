#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
        for(int i=0;i<s.size()-1;i++)
        {
          for(int j=i+1;j<s.size();j++)
          {
              if(s[j]<s[i] && (s[j]>='1' && s[j]<='3'))
              {int temp=s[j];
              s[j]=s[i];
              s[i]=temp;}
          }
        }
        cout<<s<<endl;
return 0;
}