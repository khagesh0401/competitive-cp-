#include<bits/stdc++.h>
using namespace std;

long long g(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return g(b, a % b);
}
 
long long l(int a, int b)
{
    return (a / g(a, b)) * b;
}


   int main()
   {
    int t,c=0;
    cin>>t;
    while(t--)
    {int b,c,a=0;
    cin>>b>>c;
    cout<<l(b, c)/b<<endl;
    }
return 0;
}