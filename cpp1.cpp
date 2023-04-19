#include <iostream>
#include <vector>
#include <cmath>
#include<bits/stdc++.h>

using namespace std;

int main() {
    // Step 1: Read input
    int n, budget;
    cin >> n >> budget;
    vector<int> actors(n);
    for (int i = 0; i < n; i++) {
        cin >> actors[i];
    }

    // Step 2: Initialize variables
    int min_diff = INT_MAX;
    int pair_sum = INT_MAX;
  int actor1,actor2;
    // Step 3: Find closest pair
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            int sum = actors[i] + actors[j];
            int diff = abs(budget - sum);
            if (diff < min_diff || (diff == min_diff && sum < pair_sum)) {
                min_diff = diff;
                pair_sum = sum;
                int actor1 = actors[i];
                int actor2 = actors[j];
            }
        }
    }

    // Step 4: Output result
    cout << actor1 << endl;
    cout << actor2 << endl;

    return 0;
}