#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin>>t;
   while(t--)
    {int n;
    cin>>n;
    string s;
    cin>>s;
    int counter=0;
    bool flag=1;

    for(int i=1;i<=n;i++)
    {
        if((s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'))
         {counter++;
         if(counter>=4)
          {flag=1;
           break;}
         else
          flag=0;}
    }
    if(flag==0)
     cout<<"YES"<<endl;
    else
     cout<<"NO"<<endl;
    }
return 0;
}