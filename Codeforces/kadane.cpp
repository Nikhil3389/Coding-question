#include <bits/stdc++.h>
using namespace std;

void v()
{
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);

#endif
    // return 0;
}

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum =0;
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<0)
        {
            sum =0;
        }
        maxSum = max(maxSum,sum);

    }
    cout<<maxSum<<endl;
}

int main()
{
    // v();
    // int t;
    // cin >> t;
    // while (t--)
    // {
        solve();
    // }
}