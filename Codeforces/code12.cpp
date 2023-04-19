//Full AC
#include<bits/stdc++.h>
#define ll long long

using namespace std;
ll solve1(ll i, ll j,vector<vector<ll> > &dp, vector<ll> &arr,int x,int n)
{
    if(i>=n)
        return 0;
    ll &ans=dp[i][j];
    if(ans==-1)
    {
        ans=arr[i]+solve(i+1,0,dp,arr,x,n);
        if(j<3 && i!=0 && i!=n-1)
            ans=min(ans,x+solve(i+1,j+1,dp,arr,x,n));
    }
    return ans;
}
ll solve(int x,vector<ll> &arr,int n)
{
     vector<vector<ll> > dp(n+1,vector<ll> (4,-1));

 return solve1(0,0,dp,arr,x,n);
}

int main()
{
    ll n,x;
    cin>>n>>x;
   
    vector<ll> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<solve(x,arr,n);
}