#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr, int n, vector<int> &pref)
{
    int count =0;
    pref[0] =  arr[0];
    for(int  i =1;i<n;i++)
    {
        pref[i] = arr[i-1]+arr[i];
    }
    
}
int main()
{
    int n; 
    cin>>n;
    vector<int> arr(n);
    vector<int> pref(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    solve(arr,n,pref);
    for(int i=0;i<n;i++)
    {
        cout<< pref[i]<<" ";
    }
    // cout<<sol<<endl;

    return 0;
}