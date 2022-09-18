/*
You are given a binary string s of length n containing only '0's and '1's. You have to split s into multiple substrings like s[1...r1],s[r1+1...r2],...s[rk+1...n] where 1≤r1 < r2 < … < rk < n, such that each of them contains strictly more number of '1's than '0's. Find the maximum number of substrings into which s can be split. It is guaranteed that s contains more number of '1's than '0's.

Input Format
First line contains a single integer T, denoting the number of testcases.
Each of the next T lines contain a binary string s containing only '0's and '1's.

Output Format
For each testcase, print a single integer denoting the maximum number of substrings into which s can be split such that each of them contains strictly more number of '1's than '0's.
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count0=0;
        int count1=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
             count0++;
            else if(s[i]=='1')
             count1++;
        }
          if(count1==0)
           cout<<"0"<<endl;
          else if(count0==0)
           cout<<count1<<endl;
          if(count1=2*count0)
          {cout<<count0<<endl;}
          else if(count1>2*count0)
          {cout<<count0+(count1-count0)<<endl;}
          else
           cout<<"0"<<endl;
    }
return 0;
}