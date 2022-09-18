/*
You are given an array A containing N positive integers. Find the number of pairs (i,j) such that 1≤i<j≤N and:
Ai+Aj≥Ai⋅Aj

Input Format
The first line contains an integer T denoting the number of test cases. The T test cases then follow.
The first line of each test case contains an integer N.
The second line of each test case contains N space-separated integers A1,A2,…,AN.

Output Format
For each test case, output on a new line the required answer.
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
        for(int i=0;i<n;i++)
        {cin>>a[i];} 
        int c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
             c1++;
            if(a[i]==2)
             c2++;
            
        }
        long int ans = c1*(n-c1) + c1* (c1-1)/2 + c2* (c2-1)/2;
        cout<<ans<<endl;
   }
return 0;
}
//TLE