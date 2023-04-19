// The Stock Span Problem

// The stock span problem is a financial problem where we have a series of N daily price quotes
//  for a stock and we need to calculate the span of the stock’s price for all N days. The span Si of the stock’s price
//   on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price
//    of the stock on the current day is less than its price on the given day. 



// Input: N = 7, price[] = [100 80 60 70 60 75 85]
// Output: 1 1 1 2 1 4 6
// Explanation: Traversing the given input span for 100 will be 1,
//  80 is smaller than 100 so the span is 1,
//   60 is smaller than 80 so the span is 1,
//    70 is greater than 60 so the span is 2
//    and so on. Hence the output will be 1 1 1 2 1 4 6.

// Input: N = 6, price[] = [10 4 5 90 120 80]
// Output:1 1 2 4 5 1
// Explanation: Traversing the given input span for 10 will be 1
// , 4 is smaller than 10 so the span will be 1,
//  5 is greater than 4 so the span will be 2
//   and so on. Hence, the output will be 1 1 2 4 5 1.
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


vector<int> solveStack(vector<int> &arr, int n)
{
     vector<int> ans;
    stack<pair<int,int>> st;
    for(int i= 0;i<n;i++)
    {
        if(st.size() == 0)
        {
            ans.push_back(-1);
        }
        else if(st.size() > 0  && st.top().first > arr[i])
        {
            ans.push_back(st.top().second);
        }
        else if( st.size() >0 && st.top().first <= arr[i])
        {
            while(st.size() > 0  && st.top().first <=  arr[i])
            {
                st.pop();
            }
            if(st.size() == 0)
        {
            ans.push_back(-1);
        }
        else if(st.size() > 0  && st.top().first > arr[i])
        {
            ans.push_back(st.top().second);
        }
        }
        st.push({arr[i],i});

    }
    for(int i =0;i<ans.size();i++)
    {
        ans[i] =  i-ans[i];
    }
    return ans;
}
void  solve(vector<int> &arr,int n)

{  
    for(int i=0;i<n;i++)
    {int count =1;
        for(int j = i-1;j>=0&&arr[j]<arr[i];j--)
        {
            if(arr[j] <arr[i])
            {
             count++;   
            }
            
        }
        cout<<count<<" ";
        
    }
    
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
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int> ans =  solveStack(arr,n);
        for(auto i: ans )
        {
            cout<<i << " ";
        }
    // }
}