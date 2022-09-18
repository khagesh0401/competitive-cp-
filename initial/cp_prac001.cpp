#include<bits/stdc++.h>
using namespace std;

/*int main()
{
    int n,c=0;
    cin>>n;
    int a[n];
    
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
            a[i-1]=i;
        }
        else
        a[i-1]=0;
    }
    cout<<c<<endl;
    for(int i=1;i<=n;i++)
    {if(n%i==0)
    cout<<i<<" ";}
    return 0;
}*/

int main()
{
    int a,b,c,temp;
    cin>>a>>b>>c;
    
    if((a<b && a>c) || (a>b && a<c))
    cout<<a;

    else if((b<a && b>c) || (b>a && b<c))
    cout<<b;

    else
    cout<<c;
return 0;}