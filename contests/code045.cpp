/*
Chef decided to go on a diet during the following N days (numbered 1 through N). Part of the diet plan is to eat K grams of protein during each day. For each valid i, Chef wants to buy Ai grams of protein in the morning of the i-th day and then eat K grams of protein as part of his dinner. If he has any protein remaining, he can store it and use it in later dinners. Initially, Chef is storing 0 grams of protein.

Determine whether Chef will have enough protein all the time during his diet. In case he will not have enough, find the first day on which Chef will be unable to eat K grams of protein.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and K.
The second line contains N space-separated integers A1,A2,…,AN.

Output
For each test case:

If Chef will have enough protein during his diet, print a single line containing the string "YES".
Otherwise, print a single line containing the string "NO", followed by a space and one integer — the first day when Chef will be unable to eat K grams of protein.
*/

#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int sum=0,p=0;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			
		}
		for(int i=0;i<n;i++)
		{
			sum=sum+a[i];
			if(sum<k)
			break;
			sum=sum-k;
			p++;
			
		}
		if(p==n)
		cout<<"YES"<<endl;
		else 
		cout<<"NO"<<" "<<p+1<<endl;
		
	}
}