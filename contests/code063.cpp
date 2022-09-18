/*
Kristina has two arrays a and b, each containing n non-negative integers. She can perform the following operation on array a any number of times:

apply a decrement to each non-zero element of the array, that is, replace the value of each element ai such that ai>0 with the value ai−1 (1≤i≤n). If ai was 0, its value does not change.
Determine whether Kristina can get an array b from an array a in some number of operations (probably zero). In other words, can she make ai=bi after some number of operations for each 1≤i≤n?

For example, let n=4, a=[3,5,4,1] and b=[1,3,2,0]. In this case, she can apply the operation twice:

after the first application of the operation she gets a=[2,4,3,0];
after the second use of the operation she gets a=[1,3,2,0].
Thus, in two operations, she can get an array b from an array a.

Input
The first line of the input contains an integer t (1≤t≤104) —the number of test cases in the test.

The descriptions of the test cases follow.

The first line of each test case contains a single integer n (1≤n≤5⋅104).

The second line of each test case contains exactly n non-negative integers a1,a2,…,an (0≤ai≤109).

The third line of each test case contains exactly n non-negative integers b1,b2,…,bn (0≤bi≤109).

It is guaranteed that the sum of n values over all test cases in the test does not exceed 2⋅105.

Output
For each test case, output on a separate line:

YES, if by doing some number of operations it is possible to get an array b from an array a;
NO otherwise.
You can output YES and NO in any case (for example, strings yEs, yes, Yes and YES will be recognized as a positive response).
*/

#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];

        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++)
        cin>>b[i];

        for(int i=1;i<n;i++)
        {
            if((a[i]-b[i])==(a[i+1]-b[i+1]))
             cout<<"YES"<<endl;
            else
             cout<<"NO"<<endl;
        }
    }
return 0;
}

//incomplete