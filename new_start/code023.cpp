#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int k;
    cin>>k;
     while(k>0)
     {
         if(t%10!=0)
       {   t-=1;}
         else
          {t=t/10;}
          k--;
     }
     cout<<t<<endl;
return 0;
}