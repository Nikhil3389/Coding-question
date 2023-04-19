#include<bits/stdc++.h>
using namespace std;
// int ans=0;

int solve(int n,vector<int>dp)
{
    dp[0] =0;
    dp[1] =1;
    for(int i =2;i<=n;i++)
    {
        dp[i] =  dp[i-1]+dp[i-2];

    }
    return dp[n];
}
// int solve(int n,vector<int>dp)
// {
//     if(n<=1)
//     {
//         return n;
//     }
//     if(dp[n]!=-1)
//     {
//         return -1;
//     }
    
//     dp[n]= solve(n - 1,dp) + solve(n - 2,dp);
    
//      return dp[n];
// }
int main()
{
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    for(int i=1;i<=n;i++)
    {
        cout << solve(i,dp);
    }
    // vector<int> dp();
    

}
