#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    string s2;
    cin>>s1>>s2;
    int c1=0,c2=0;

    for(int i=0;i<s1.size();i++)
    {c1+=s1[i];
    c2+=s2[i];}

    {if(c1>c2)
     cout<<"1"<<endl;
     else if(c1<c2)
      cout<<"-1"<<endl;
     else
      cout<<"0"<<endl;}

return 0;
}
//incomplete