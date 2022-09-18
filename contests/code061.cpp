/*
An array A of length N is said to be pseudo-sorted if it can be made non-decreasing after performing the following operation at most once.

Choose an i such that 1≤i≤N−1 and swap Ai and Ai+1
Given an array A, determine if it is pseudo-sorted or not.

Input Format
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first line of each test case contains an integer N - the size of the array A.
The second line of each test case contains N space-separated integers A1,A2,…,AN denoting the array A.

Output Format
For each testcase, output YES if the array A is pseudo-sorted, NO otherwise.

You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
      long long n,i=0,c=0;
      cin>>n;
      long long a[n];
      for(i=0;i<n;i++)
      {
          cin>>a[i];
      }

      for(i=1;i<n-1;i++)
      {
          for(int j=i+1;j<n;j++)
          {
              if(a[j]>=a[i] && )
          }
      }
return 0;
}

/*
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    bool flag=false;
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {cin>>a[i];
	         if(a[i]>a[i+1])
	         {swap(a[i],a[i+1]);break;}
	             
	         }
	        for(int i=0;i<n;i++)
	    {cin>>a[i];
	       if(a[i]<a[i+1])
	         flag=true;
	        else
	        { cout<<"no"<<endl;break;}
	          }  
	    
	    if(flag==true)
	     cout<<"yes"<<endl;
	}
	return 0;
}


same logic
*/