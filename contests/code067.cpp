/*
There are only 2 type of denominations in Chefland:

Coins worth 1 rupee each
Notes worth 10 rupees each
Chef wants to pay his friend exactly X rupees. What is the minimum number of coins Chef needs to pay exactly X rupees?

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line of input containing a single integer X.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {int x;
    cin>>x;
    int t=0;
    int o=0;
    t=x/10;
    o=(x%10)/1;
    cout<<o<<endl;}
return 0;
}