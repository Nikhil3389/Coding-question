#include<bits/stdc++.h>
using namespace std;
void solve(int i,vector<int> &arr,int n)
{
    if(i>=n/2)
    {
        return;
    }
    swap(arr[i],arr[n-i-1]);
    solve(i+1,arr,n);
}
// void solve1(int i,int j, vector<int>&arr)
// {
//     if(i>=j)
//     {
//         return ;
//     }
//     swap(arr[i],arr[j]);
//     solve(i+1,j-1,arr);
// }
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];

    }
    solve(0,arr,n);
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
}