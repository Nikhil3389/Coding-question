// A. Arrival of the General
// Examples
// input
// 4
// 33 44 11 22
// output
// 2
// input
// 7
// 10 10 58 31 63 40 76
// output
// 10



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



void  solve()
{  
    int n;
    cin>>n;
    int mini=0,maxi=0;
    int min_value = INT_MAX , max_value = INT_MAX;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x>max_value)
        {
            maxi = i;
            max_value =  x;
        }
        if(x<min_value)
        {
            mini = i;
            min_value = x;
        }
    }
    if(mini<maxi)
    {
        cout<<(maxi-1)+(n-mini)-1;
    }
    else{
        cout<<(maxi-1)+(n-mini);
    }
}
      
int main()
{
    // v();
    // int t;
    // cin>>t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}