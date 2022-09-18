#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5];
    int row=0;
    int col=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
         cin>>a[i][j];}
            
                for(int i=0;i<5;i++)
                {
                    for(int j=0;j<5;j++)
                        {if(a[i][j]==1)
                        {row=i;
                        col=j;
                        break;}
                       }
                }
        if(row>=2 && col>=2)
            cout<<(row-2)+(col-2)<<endl;
        else
          {if(row<2 && col>=2)
            cout<<(-(row-2))+(col-2)<<endl;
         else if(row>=2 && col<2)
            cout<<(row-2)+(-(col-2))<<endl;
         else
            cout<<(-(row-2))+(-(col-2))<<endl;}
       
return 0;
}