#include <bits/stdc++.h>
using namespace std;

// void v()
// {
//     // ios_base::sync_with_stdio(false);
//     // cin.tie(NULL);
//     #ifndef ONLINE_JUDGE
 
//     // For getting input from input.txt file
//     freopen("input.txt", "r", stdin);
 
//     // Printing the Output to output.txt file
//     freopen("output.txt", "w", stdout);
 
// #endif
//     // return 0;
// }



string  solve(string str)
{  
    vector<int>ans(26,0);
    
    for(int i=0;i<str.size();i++)
    {
        ans[str[i]-97] =1;
    }
    string ch ="";
    for(int i=0;i<26;i++)
    {
        if(ans[i] == 1)
        {
             ch += char(i+97);
        }
       
    }
    return ch;
    
}
      
int main()
{
    string str;
    cin>>str;
    string ans =  solve(str);
    cout<<ans<<" ";
    // v();
    // int t;
    // cin>>t;
    // while(t--)
    // {
    //     solve();
    // }

}