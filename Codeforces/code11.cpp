// microsoft oa question

#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<string> &str) {
     int n = str.size();
     int m = str[0].size();
    vector<vector<int>> dp(m, vector<int>(26, -1));
    for(int j = 0; j < n; j++) 
    {
        auto& w = str[j];
        for(int i = 0; i < m; i++)
        {
            auto& ans = dp[i][w[i] - 'a'];
            if(ans == -1) 
            {
            	ans = j;
            }
            
            else
            {
            	return {min(ans, j), max(ans, j), i};
            }
        }
    }
    return {};
}

int main() {
    int n;
    cin >> n;
    vector<string> str(n);
    
    for(auto& i: str) 
    {
    	cin >> i;
    }
    auto ans = solve(str);
    
    for(auto& i: ans) 
    {
    	cout << i << ' ';
    }
    cout << '\n';
    return 0;
}