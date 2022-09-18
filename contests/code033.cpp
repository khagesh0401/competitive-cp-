/*
The Govt of India is planning a survey to find 3 categories of people based on age in India. First category people are Children whose age between 1 to 18, Second category people are Citizens whose age between 19 to 55 and finally Third category people are Senior Citizens whose age is more than 55.

Input Format
-The first line contains an integer T, the total number of test cases.

Each test case contains a single line of input, one Integer age N.

Output Format
For each test case, Print the Category of the people.
*/#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        if(x>=1 && x<=18)
         cout<<"Children"<<endl;
        else if(x>=19 && x<=55)
         cout<<"Citizens"<<endl;
        else 
         cout<<"Senior Citizens"<<endl;
    }
    return 0;
}