/*
Dazzler has a task for you.

Given two positive integers A and B, find two positive integers i and j such that:

gcd(i,j)>1;
A≤i<j≤B;
The value (i+j) is minimum possible.
If there are multiple solutions, you may print any of them. If no such pair exists, print −1.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers A and B.

Output Format
For each test case, output in a single line two space-separated integers i and j satisfying all the conditions. If no such pair exists, print −1.
*/


#include<bits/stdc++.h>
using namespace std;
  int check();
int sol(int a,int b)
{
  int check(int x,int y)
    {
     if( x>=a && y>=b && __gcd(x,y)>1)
      return 1;
     else
      return -1;}

     if(check(a,a+2))
     {cout<<a<<" "<<a+2<<endl;
     return 0;}
        if(check(a+1,a+3))
     {cout<<a+1<<" "<<a+3<<endl;
     return 0;}
        if(check(a,a+3))
     {cout<<a<<" "<<a+3<<endl;
     return 0;
    }
     
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

        sol(a,b);
    }
return 0;
}
//incomplete
