/*
You are given an array A of length N. Find the number of pairs of indices (i,j) such that

1≤i<j≤N
Ai⋅Aj>0

Input Format
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first line of each test case contains an integer N - the size of the array A.
The second line of each test case contains N space-separated integers A1,A2,…,AN denoting the array A.

Output Format
For each test case, output the number of pairs which satisfy the above conditions.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ng=0,ps=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {cin>>a[i];
         if(a[i]>0)
          ps++;
        if(a[i]<0)
          ng++;}
          int fp=(ps*(ps-1))/2;
          int fn=(ng*(ng-1))/2;
          cout<<fp+fn<<endl;
    }
return 0;
}