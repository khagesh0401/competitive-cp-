#include<bits/stdc++.h>
using namespace std;

int display(set<int> s)
{
    int c=0;
    set<int>::iterator i;
    for(i= s.begin();i != s.end();i++)
                c++;
return c;}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
            set <int> s={6,7,13,14,20,21,27,28};
            set <int>::iterator i;
            int n;
            cin>>n;
            int a[n];
            for(int i=0;i<n;i++)
            {cin>>a[i];
             s.insert(a[i]);}
            int count=display(s);

    cout<<count<<endl;}
return 0;
}