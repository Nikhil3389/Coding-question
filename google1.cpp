#include <bits/stdc++.h>
using namespace std;
bool found;
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





#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        
       
    }
    return 0;
}

void  solve()
{  
    vector<int> mapping(26);
        for (int i = 0; i < 26; i++) {
            cin >> mapping[i];
        }
        int N;
        cin >> N;
        unordered_set<string> encodings;
         found = false;
        for (int i = 0; i < N; i++) {
            string word;
            cin >> word;
            string encoding(word.size(), '0');
            for (int j = 0; j < word.size(); j++) {
                encoding[j] = mapping[word[j] - 'A'] + '0';
            }
            if (encodings.count(encoding) > 0) {
                found = true;
            }
            encodings.insert(encoding);
        
        }

}
      
int main()
{
    // v();
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++) {
    
        solve();
         cout << "Case #" << t << ": " << (found ? "YES" : "NO") << endl;
    }
    
}

