// Question 6 – Disk Space Analysis
// Problem Statement -:  You are given an array, You have to choose a contiguous subarray of length ‘k’, and find the minimum of that segment, return the maximum of those minimums.

// Sample input 0 

// 1 →  Length of segment x =1

// 5 →  size of space n = 5

// 1 → space = [ 1,2,3,1,2]

// 2 

// 3 

// 1 

// 2 

// Sample output

// 3

// Explanation

// The subarrays of size x = 1 are [1],[2],[3],[1], and [2],Because each subarray only contains 1 element, each value is minimal with respect to the subarray it is in. The maximum of these values is 3. Therefore, the answer is 3


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int> arr(n);
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
     int maxi = INT_MIN;
        int mini =  INT_MAX;
    for(int i =0;i<=n-x;i++)
    {
       mini =  INT_MAX;
        for(int  j =i;j<(i+x);j++)
        {
            mini = min(mini,arr[j]);
        }
        maxi = max(maxi,mini);

    }
    cout<<maxi<<" ";
}