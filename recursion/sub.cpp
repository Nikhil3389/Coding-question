#include<bits/stdc++.h>
using namespace std;
void solve(int ind, vector<int> &ans,int arr[] ,int n)
{
    if(ind == n)
    {
        for(auto i: ans)
        {
            cout<<i<<" ";
        }
        if(ans.size() == 0)
        {
            cout<<"{ }";
        }
        cout<<endl;
    }
    ans.push_back(arr[ind]);
    solve(ind+1,ans,arr,n);
    ans.pop_back();
    solve(ind+1,ans,arr,n);

}
int main()
{
    int arr[] ={3,1,2};
    int n =3;
    vector<int> ans;
    solve(0,ans,arr,n);
    // return 0;
}