#include <bits/stdc++.h>
using namespace std;

int firstMissing(vector<int> arr) {
    unordered_set<int> seen;

    // Insert all positive integers into the Set
    for(int i = 0; i < arr.size(); i++) {
        if (arr[i] > 0) {
            seen.insert(arr[i]);
        }
    }

    // Check for the first missing positive integer
    int i = 1;
    while (seen.count(i)) {
        i++;
    }

    return i;
}

int main() {
    vector<int> arr = {3, 2, -6, 1, 0};

    int ans = firstMissing(arr);
    cout << "\nFirst Missing Positive Number in the above array is " << ans;
    
    cout << endl;
    return 0;
}