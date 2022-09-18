/*
Given an array a of n elements, print any value that appears at least three times or print -1 if there is no such value.

Input
The first line contains an integer t (1≤t≤104) — the number of test cases.

The first line of each test case contains an integer n (1≤n≤2⋅105) — the length of the array.

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤n) — the elements of the array.

It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.

Output
For each test case, print any value that appears at least three times or print -1 if there is no such value.
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,b=1,i;
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++)
        {cin>>a[i];}
         sort(a,a+n);
         
         for(i=0;i<n && b<3;i++)
         {if(a[i]==a[i+1])
          b++;
          else
           b=1;}

        
          if(b>=3)
           cout<<a[i]<<endl;
          else
           cout<<"-1"<<endl;
         
             
    }
return 0;
}

//wrong on test case 2