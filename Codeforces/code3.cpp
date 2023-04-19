#include<bits/stdc++.h>
using namespace std;
#define intl  long long int
 
 
 
void  solve()
{
    
int n;
cin>>n;
int m;
cin>>m;
set<int> st1;
// cout<<m<<"qqq ";
for(int i=0;i<m;i++)
{
    int a;
    cin>>a;
    st1.insert(a);
}

int q;
cin>>q;
for(int i=0;i<q;i++)
{
    int b;
    cin>>b;
    st1.insert(b);
}

if(st1.size() == n)

{
    
    cout<<"I become the guy.";
    
}
else
{  
    // cout<<c<<" "<<c1;
    cout<<"Oh, my keyboard!";
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