/*
Problem
Download the Starter Code!
Alice and Bob are playing the game called Centauri Prime. Centauri Prime represents a planet which is split into several independent kingdoms. Before they start playing the game, they have to choose rulers for each kingdom. Alice and Bob mutually decided to distribute kingdoms based on the letter the kingdom's name ended with. Alice loves vowels and decided to rule kingdoms whose names ended in a vowel. Bob loves consonants and decided to rule kingdoms whose names ended in a consonant. Both of them do not like the letter 'y'(case insensitive) and thus, all kingdoms whose names ended in the letter 'y' are left without a ruler. Can you write a program that will determine the rulers of several kingdoms, given the kingdoms' names?

Input
The first line of the input gives the number of test cases, T. T lines follow, each one containing the name of one kingdom. Kingdom names will consist of only lower case English letters, starting with a capital letter. There will be no other characters on any line, and no empty lines.
List of vowels for this problem is ['A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'].

Output
For each test case, output one line containing Case #x: K is ruled by Y., where x is the case number (starting from 1), K is the kingdom name, and Y is either Alice, Bob or nobody.

Be careful with capitalization and the terminating period. Your output must be in exactly this format. See the examples below.
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
        for(int i=1;i<=t;i++)
        {
            string s;
            cin>>s;
            int x=s.size();
             if(s.back()=='a' || s.back()=='e' || s.back()=='i' || s.back()=='o' || s.back()=='u' ||
                s.back()=='A' || s.back()=='E' || s.back()=='I' || s.back()=='O' || s.back()=='U'  )
             { cout<<"case #"<<i<<": "<<s<<" is ruled by Alice."<<endl;}
             else if(s.back()=='y' || s.back()=='Y')
              {cout<<"case #"<<i<<": "<<s<<" is ruled by Nobody."<<endl;}
             else
              {cout<<"case #"<<i<<": "<<s<<" is ruled by Bob."<<endl;}
        }
return 0;}