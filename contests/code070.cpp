/*
Chef is teaching his class of N students at Hogwarts. He groups students with the same height together for an activity. Some of the students end up in a groups with only themselves and are saddened by this.

With the help of his magic wand, Chef can increase the height of any student to any value he likes. Now Chef wonders, what is the minimum number of students whose height needs to be increased so that there are no sad students?

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains one integer N — the number of students.
The second line consists of N space-separated integers H1,H2,…,HN denoting the heights of the students.
Output Format
For each test case, output on a single line the minimum number of students whose heights must to be increased.
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
        int h[n];
        int count=0;
        int t=0;
        int temp=0;
        for(int i=0;i<n;i++)
        {
            cin>>h[i];
        }

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(i==j)
                 count+=2;
            }
            if(count==0)
             t++;
            else
             temp+=count;
        }
         t-=temp;
        cout<<(t/2)+(t%2)<<endl;
    }
}

//incomplete