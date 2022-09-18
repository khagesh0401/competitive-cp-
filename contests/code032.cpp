#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      cin>>arr[i];
       int c=0;
        bool flag=false;
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            c=arr[i]+arr[i+1]+arr[i+2];
            if(c==0)
            {flag=true;}
        }
        if(flag==true)
        {cout<<"1"<<endl;}
        else
         cout<<"0"<<endl;
}