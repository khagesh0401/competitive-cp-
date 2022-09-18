#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        bool flag=false;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<>());
        int sum=0;
        int i;
        for(i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum>=x)
             {
                 flag=true;
                 break;
             }
        }
        if(flag==true)
        cout<<i+1<<endl;
        else
        cout<<"-1"<<endl;
    }
    return 0;
}