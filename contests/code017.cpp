#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char c;
        cin>>c;
        bool flag=false;

             for(int i=0;i<s.length();i++)
             {
                 if(s[i]==c && i%2==0)
                 {
                     flag=true;
                     break;
                     
                 }
                else
                 flag=false;

             }
             if(flag==true)
              {cout<<"YES"<<endl;}
            else if(flag==false)
             cout<<"NO"<<endl;
    }
return 0;
}