// next smallest element from right
#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr,int n)
{
    for(int i=0;i<n;i++)
    {int next =-1;
        for(int j =i+1;j<n;j++)
        {
            if(arr[j] < arr[i])
            {
                next = arr[j];
            }

        }
        cout<<next<<" ";

    }
}
vector<int> solution(vector<int> &arr,int n)
{
    vector<int> ans;
    stack<int> st;
    for(int i = n-1;i>=0;i--)
    {
        if(st.size() ==0)
        {
            ans.push_back(-1);
        }
        else if(st.size()>0 && st.top() < arr[i])
        {
            ans.push_back(st.top());

        }
        else if(st.size()>0 && st.top() >= arr[i] )
        {
            while(st.size()>0 && st.top()>= arr[i])
            {
                st.pop();
            }
            if(st.size() == 0)
            {
                ans.push_back(-1);
            }
            
           else if(st.size()>0 && st.top() <= arr[i])
           {
            ans.push_back(st.top());
           }
        }
        st.push(arr[i]);
        
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> ans =  solution(arr,n);
    for(auto i: ans)
    {
        cout<<i<<" ";
    }
    return 0;

}