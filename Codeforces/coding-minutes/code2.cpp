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
    cin >> n;
    int target;
    cin >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int low  =0;
    int high  = arr.size();
    int ans =0;
    while(low<high)
    {
        int mid =  (low+high)/2;
        if(mid >0 && arr[mid < arr[mid-1]])

        {
                ans  = arr[mid];
                break;
        }else if( mid < high && arr[mid] >arr[mid+1])
        {
            ans =  arr[mid+1];
            break;
        }
        else if(arr[mid] > arr[low])
        {
            low= mid+1;
        }
    
    else{
        high =  mid-1;
    }
    }
    

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