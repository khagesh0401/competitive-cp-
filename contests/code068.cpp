/*
You are given an integer N. Find if it is possible to represent N as the sum of several(possibly zero) 2's and several(possibly zero) 7's.

Formally, find if there exist two integers X,Y (X,Y≥0) such that 2⋅X+7⋅Y=N.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line containing an integer N.
Output Format
For each test case, print on a new line YES if it is possible to represent N as the sum of several(possibly zero) 2's and several(possibly zero) 7's and NO otherwise.

You may print each character of the string in either uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES will all be treated as identical).
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
        if(n%2==0)
         cout<<"YES"<<endl;
        else if((n%7)%2==0)
         cout<<"YES"<<endl;
        else if((n%2)%7==0)
         cout<<"YES"<<endl;
        else
         cout<<"NO"<<endl;
    }
return 0;
}