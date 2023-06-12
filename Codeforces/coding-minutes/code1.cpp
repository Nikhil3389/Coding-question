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

void solve1()
{
    int n;
    cin>>n;
    int target ;
    cin>>target;
    vector<int> arr(n);
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int low  = lower_bound(arr.begin(),arr.end(),target) - arr.begin();
    int high =  upper_bound(arr.begin(),arr.end(),target)-arr.begin();
    cout<< high- low;
}
int binary(vector<int>& arr,int target)
{
    int low =0;
    int high =  arr.size();
    while(low<high)
    {
        int mid  = low+ (high-low)/2;
        if(arr[mid] > target )
        {
            high =  mid;

        }
        else{
            low  = mid+1;
        }
    }
    return low;
}
void solve()
{
    int n;
    cin >> n;
    int target;
    cin >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int  p1 =  binary(arr,target);
    int p2 =  binary(arr,target-1);
    if(p1 == p2)
    {
        cout<<-1;
    }
    cout<<p1-p2<<endl;

}
int main()
{
    // v();
    // int t;
    // cin >> /t;
    // while (t--)
    // {
        solve();
    // }
}