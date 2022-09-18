#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int mini=0;
    while(t--)
    {
        int x;
        cin>>x;
        int a[3];
        for(int i=0;i<3;i++)
        {cin>>a[i];}
        sort(a,a+3);
        cout<<((x-1)*a[0])+(1*a[1])<<endl;
    }
return 0;
}