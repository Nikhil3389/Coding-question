#include<bits/stdc++.h>
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
class solution1
{
    public:
    vector<long long> solution(vector<long long>arr,int n)
{
    vector<long long> ans;
    stack<long long> st;
    for(int i= 0;i<n;i++)
    {
        if(st.size() == 0)
        {
            ans.push_back(-1);
        }
        else if(st.size() > 0  && st.top() > arr[i])
        {
            ans.push_back(st.top());
        }
        else if( st.size() >0 && st.top() <= arr[i])
        {
            while(st.size() > 0  && st.top() <=  arr[i])
            {
                st.pop();
            }
            if(st.size() == 0)
        {
            ans.push_back(-1);
        }
        else if(st.size() > 0  && st.top() > arr[i])
        {
            ans.push_back(st.top());
        }
        }
        st.push(arr[i]);
    }
    // reverse(ans.begin(),ans.end());
    return ans;
}

};


void  solve()
{  

    }
      
int main()
{
    // v();
    // int t;
    // cin>>t;
    // while(t--)
    // {
        int n;
cin>>n;
vector<long long> arr(n);
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
solution1 obj;

vector<long long> ans =  obj.solution(arr,n);
for(auto i: ans)
{
    cout<<i<<" ";
}
cout<<endl;

    // }
    return 0;
}