/*
Chef considers a permutation P of {1,2,3,…,N} End Sorted if and only if P1=1 and PN=N.

Chef is given a permutation P.

In one operation Chef can choose any index i (1≤i≤N−1) and swap Pi and Pi+1. Determine the minimum number of operations required by Chef to make the permutation P End Sorted.

Note: An array P is said to be a permutation of {1,2,3,…,N} if P contains each element of {1,2,3,…,N} exactly once.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains a single integer N, denoting the length of the permutation P.
The second line contains N space-separated integers P1,P2,P3,…,PN, denoting the permutation P.
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
        int p[n];
        for(int i=1;i<=n;i++){
            cin>>p[i];
        }

       int one=0,last=0;
       for(int i=1;i<=n;i++)
       {
        if(p[i]==1)
         one=i;
        else if(p[i]==n)
         last=i;
       }
        
        if(one<last)
         {
            cout<<(one-1)+(n-last)<<endl;
         }
        else
         {
            cout<<((one-1)+(n-last))-1<<endl;
         }
    }
return 0;
}