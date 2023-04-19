#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<pair<int, int>> heroes(q);
    for (int i = 0; i < q; i++) {
        cin >> heroes[i].first >> heroes[i].second;
    }

    vector<pair<pair<int, int>, int>> monsters;
    for (int i = 0; i < n; i++) {
        int l, r, s;
        cin >> l >> r >> s;
        monsters.push_back({{l, s}, 1});
        monsters.push_back({{r + 1, s}, -1});
    }

    sort(monsters.begin(), monsters.end());

    int j = 0;
    vector<int> ans(q);
    for (int i = 0; i < q; i++) {
        while (j < monsters.size() && monsters[j].first.first <= heroes[i].first) {
            if (monsters[j].second == 1) {
                // A monster appears
                if (monsters[j].first.second < heroes[i].second) {
                    ans[i]++;
                }
            } else {
                // A monster disappears
                if (monsters[j].first.second < heroes[i].second) {
                    ans[i]--;
                }
            }
            j++;
        }
    }

    for (int i = 0; i < q; i++) {
        cout << max(0, ans[i]) << endl;
    }

    return 0;
}