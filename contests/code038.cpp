/*
A single car can accommodate at most 4 people.

N friends want to go to a restaurant for a party. Find the minimum number of cars required to accommodate all the friends.

Input Format
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains an integer N - denoting the number of friends.

Output Format
For each test case, output the minimum number of cars required to accommodate all the friends.
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
        if(n%4==0)
         cout<<n/4<<endl;
        else
         cout<<(n/4)+1<<endl;
    }
return 0;
}