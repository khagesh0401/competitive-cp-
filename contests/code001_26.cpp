// //starter 26
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){int n,x;
//     int maxp=INT_MIN;
//     cin>>n>>x;
//     int a[n];
//      for(int i=0;i<n;i++)
//      {
//          cin>>a[i];
//          x+=a[i];
//          maxp=max(x,maxp);
//      }

//           cout<<maxp<<endl;
//      }
// return 0;}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {int n,x,y,cn=0;
    cin>>n>>x>>y;

    if(x==y)
     {
         if(n%100==0)
         {cn=n/100;}
         else if(n%100==1)
          cn=(n/100)+1;
     }
        else if(x<y){
         if(n%100==0)
         {cn=n/100;}
         else if(n%100==1)
          cn=(n/100)+1;}
        
        else
        {if(((n/4)+1)*y>x)
         {if(n%4==0)
         {cn=n/4;}
         else if(n%4==1)
          cn=(n/4)+1;}
          else
          {if(n%4==0)
         {cn=n/4;}
         else if(n%4==1)
          cn=(n/4)+1;}}
    }

    

return 0;}