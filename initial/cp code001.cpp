//Pen, Pencil code
/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    cout<<(a*x)+(b*y)<<endl;
    return 0;
}
*/

/*//isboth code
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    
    if(n%5==0 && n%11==0)
    cout<<"BOTH";
    else if(n%5==0 || n%11==0)
    cout<<"ONE";
    else if(n%5!=0 || n%11!=0)
    cout<<"NONE";
    return 0;
}*/

/*
//codechef competition code
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {int d1,d2,d3,s1,s2,s3;
        cin>>d1>>d2>>d3;
        cin>>s1>>s2>>s3;
       if (d1+d2+d3>s1+s2+s3)
        cout<<"DRAGON\n";
       else if(d1+d2+d3<s1+s2+s3)
        cout<<"SLOTH\n";
       else if(d1+d2+d3==s1+s2+s3)
        {
            if(d1>s1)
             cout<<"DRAGON\n";
            else if(s1>d1)
             cout<<"SLOTH\n";
            else if(d1==s1)
             {
                 if(d2>s2)
                  cout<<"DRAGON\n";
                else if(s2>d2)
                 cout<<"SLOTH\n";
                else if(s2==d2)
                 cout<<"TIE\n";
             }

        } 
    }
return 0;}
*/