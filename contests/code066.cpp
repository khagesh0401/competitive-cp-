/*
Luca has a cypher made up of a sequence of n wheels, each with a digit ai written on it. On the i-th wheel, he made bi moves. Each move is one of two types:

up move (denoted by U): it increases the i-th digit by 1. After applying the up move on 9, it becomes 0.
down move (denoted by D): it decreases the i-th digit by 1. After applying the down move on 0, it becomes 9.
Example for n=4. The current sequence is 0 0 0 0.
Luca knows the final sequence of wheels and the moves for each wheel. Help him find the original sequence and crack the cypher.

Input
The first line contains a single integer t (1≤t≤100) — the number of test cases.

The first line of each test case contains a single integer n (1≤n≤100) — the number of wheels.

The second line contains n integers ai (0≤ai≤9) — the digit shown on the i-th wheel after all moves have been performed.

Then n lines follow, the i-th of which contains the integer bi (1≤bi≤10) and bi characters that are either U or D — the number of moves performed on the i-th wheel, and the moves performed. U and D represent an up move and a down move respectively.

Output
For each test case, output n space-separated digits  — the initial sequence of the cypher.
*/

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
          for(int j=0;j<n;j++)
          {
            int p[n];
             cin>>p[j];
             int z[10];
             cin>>z[j];
             string s;
             cin>>s;
             int count=p[j];
             
             for(int i=0;i<z[j];i++)
             {
                if(s[i]=='u' || s[i]=='U')
                { count++;}
                else
                 count--;
             }
             a[j]=count;
          }

   for(int i=0;i,n;i++)
   {cout<<a[i]<<" ";} 
   cout<<endl;}
return 0;
}

//incomplete
