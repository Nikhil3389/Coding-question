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


int multi(int m,int n)
{   
    int ans = 1;
    for(int  i =1;i<=n;i++)
    {
        ans*=m;
    }
    return ans;
}
void solve(int n,int m)
{ 
    int lo =  1;
    int hi = m;
    int ans  = INT_MAX;
    while(lo<=hi)
    {
        int mid = (lo+hi)/2;
        if(multi(mid,n)<m)
        {
            
            lo = mid+1;
            cout<<lo;
           
        }
        else

        {
             
            hi = mid-1;
        }
        

    } 
    cout<<-1;
    
}
      
int main()
{
    int n,m;
    cin>>n>>m;
    solve(n,m);
    return 0;
}