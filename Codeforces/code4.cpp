// Horse
#include<bits/stdc++.h>
using namespace std;
#define intl  long long int
 
 
 
void  solve()
{
    
set<int>st;
{
    for(int i=1;i<=4;i++)
    {
        int n;
        cin>>n;
        st.insert(n);
    }
    
    int len = st.size();
    cout<<len<<" "<<4<<" "<<4-len;
}
}
int main()
{
    
//   int t;
//   cin>>t;
//   while(t--)
//   {
      solve();
       
//   }
     
}