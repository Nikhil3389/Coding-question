// C2. Powering the Hero (hard version)
// This is a hard version of the problem. It differs from the easy one only by constraints on n
//  and t
// .

// There is a deck of n
//  cards, each of which is characterized by its power. There are two types of cards:

// a hero card, the power of such a card is always equal to 0
// ;
// a bonus card, the power of such a card is always positive.
// You can do the following with the deck:

// take a card from the top of the deck;
// if this card is a bonus card, you can put it on top of your bonus deck or discard;
// if this card is a hero card, then the power of the top card from your bonus deck is added to his power (if it is not empty), after that the hero is added to your army, and the used bonus discards.
// Your task is to use such actions to gather an army with the maximum possible total power.

// Input
// The first line of input data contains single integer t
//  (1≤t≤104
// ) — the number of test cases in the test.

// The first line of each test case contains one integer n
//  (1≤n≤2⋅105
// ) — the number of cards in the deck.

// The second line of each test case contains n
//  integers s1,s2,…,sn
//  (0≤si≤109
// ) — card powers in top-down order.

// It is guaranteed that the sum of n
//  over all test cases does not exceed 2⋅105
// .
// input
// 5
// 5
// 3 3 3 0 0
// 6
// 0 3 3 0 0 3
// 7
// 1 2 3 0 4 5 0
// 7
// 1 2 5 0 4 3 0
// 5
// 3 1 0 0 4
// output
// 6
// 6
// 8
// 9
// 4
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



void  solve()
{  int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        multiset<int> st;
        long long p = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i])
            {
                st.insert(a[i]);
            }
            else
            {
            if (st.size() == 0)
            {
                    continue;
            }
 
            int v = *st.rbegin();
            auto it = st.find(v);
            st.erase(it);
 
                p += v;
            }
        }
        cout << p << endl;
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