/*
You are given two rectangles, the dimensions of the rectangles are a×b and c×d respectively. You can stack both the rectangles either horizontally or vertically as shown in the figure given below. Find if it is possible to obtain a square by stacking the given two rectangles. Note that you are not allowed to rotate any rectangle before stacking.

IUZna7F.png

Input Format
First line contains a single integer T, denoting the number of test cases.
Each of the next T lines contain four positive integers a, b, c and d, denoting the dimensions of the given rectangles.

Output Format
For each testcase, print "Yes"(without quotes), if it is possible to stack the given two rectangles to obtain a square, else print "No"(without quotes).
You may print the answer in any case, means "yes", "YES", "yES" etc are all valid.
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
         if((a+c==b && a+c==d) || (b+d==a && b+d==c))
         cout<<"yes"<<endl;
         else 
          cout<<"no"<<endl;
    }
    
return 0;
}