// D. Remove Two Letters
// Dmitry has a string s
// , consisting of lowercase Latin letters.

// Dmitry decided to remove two consecutive characters from the string s
//  and you are wondering how many different strings can be obtained after such an operation.

// For example, Dmitry has a string "aaabcc". You can get the following different strings: "abcc"(by deleting the first two or second and third characters), "aacc"(by deleting the third and fourth characters),"aaac"(by deleting the fourth and the fifth character) and "aaab" (by deleting the last 
// INPUT 
// 7
// 6
// aaabcc
// 10
// aaaaaaaaaa
// 6
// abcdef
// 7
// abacaba
// 6
// cccfff
// 4
// abba
// 5
// ababa

// OUTPUT
// 4
// 1
// 5
// 3
// 3
// 3
// 1

// CODE
#include <iostream>
#include <vector>
#include <cmath>
#include <ostream>
#include <list>
#include <map>
#include <algorithm>
#include <climits>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <bitset>
#include <cstring>
#include <iterator>
#include <deque>
#include <set>
#include <ctime>
#include <cstdlib>
#include <stack>
#include <queue>
#include <chrono>
#include <deque>
#include <string>
#include <unordered_map>
#include<assert.h>
#include <unordered_set>

using namespace std;
void v()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
 
#endif
    // return 0;
}

void solve()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int end  =  n-1;
    for(int i =1;i<n-1;i++)
    {
        if(str[i-1] ==  str[i+1])
            end--;
    }
    cout<<end<<endl;
}
int main()
{
    v();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
