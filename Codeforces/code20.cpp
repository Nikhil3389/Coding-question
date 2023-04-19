// Question 10 : Minimum Occurrence
// Problem Statement – Given a sting , return the character that appears the minimum number of times in the string. The string will contain only ascii characters, from the ranges (“a”-”z”,”A”-”Z”,0-9), and case matters . If there is a tie in the minimum number of times a character appears in the string return the character that appears first in the string.

// Input Format:
// Single line with no space denoting the input string.

// OutputFormat:
// Single character denoting the least frequent character.

// Constraints:
// Length of string <=10^6

// Sample Input:
// cdadcda

// Sample Output:
// c

// Explanation:
// C and A both are with minimum frequency. So c is the answer because it comes first with less index.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    unordered_map<char,int> mpp;
    int mini = INT_MAX;
    for(auto i: str)
    {
        mpp[i]++;
        mini =  min(mini,mpp[i]++);

    }
    for(auto i:str)
    {
        cout<<mpp[i];
        if(mpp[i] ==  mini)
        {
            cout<<i<<endl;
            break;
        }
    }

}