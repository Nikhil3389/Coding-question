// Question 11 : Devil Groups
// Problem Statement –

// There are some groups of devils and they splitted into people to kill them. Devils make People to them left as their group and at last the group with maximum length will be killed. Two types of devils are there namely “@” and “$”
// People is represented as a string “P”

// Input Format:
// First line with the string for input

// Output Format:
// Number of groups that can be formed.

// Constraints:
// 2<=Length of string<=10^9

// Input string
// PPPPPP@PPP@PP$PP

// Output
// 7

// Explanation
// 4 groups can be formed

// PPPPPP@
// PPP@
// PP$
// PP
// Most people in the group lie in group 1 with 7 members.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int cnt  =0;
    int ans = INT_MIN;
    for(int i=0;i<str.size();i++)
    {
        if(str[i] == '@'  || str[i] == '$')
        {
            cnt = 0;
        }
        else
        {
            cnt++;
        }
        ans = max(ans,cnt);
    }
    cout<<ans;
}