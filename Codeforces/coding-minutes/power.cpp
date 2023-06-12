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
    int a;
    cin >> a;
    // int target;
   int n;
   cin>>n;
   int ans =1;
   while(n>0)
   {
    int lst = (n&1);
    if(lst)
    {
        ans = ans*a;
    }
    a= a*a;
    n =n>>1;
   }
   cout<<ans<<endl;
    
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