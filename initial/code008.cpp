#include<bits/stdc++.h>
using namespace std;

int main()
{int t;
cin>>t;
while(t--)
{int n,x;
cin>>n>>x;

if(x>n)
{int s=(x-n)-1;
 cout<<s<<endl;}
else if(x<=n)
cout<<x<<endl;}
return 0;}


//bettter approach of above
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,input;
    cin>>n>>input;
    cout<<(input%(n+1))<<endl;
 return 0;   
}