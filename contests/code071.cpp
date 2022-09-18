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
    bool flag=0;

   for(int i=1;i<=n;i++)
   {
    if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o'  && s[i]!='u')
    {
        counter++;
    }
    else
     counter=0;

     if(counter>=4)
      {flag=0;break;}
     else
      flag=1;
   }
   if(flag==1)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
    }
return 0;
}