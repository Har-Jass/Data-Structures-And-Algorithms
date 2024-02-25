#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &arr) {
    // count of elements to be modified
    int count = 0;

    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] < arr[i - 1]) {
            count++;

            if(count > 1) {
                // more than 1 modification needed
                return false;
            }

            // choose which element to modify
            if(i >= 2 && arr[i] < arr[i - 2]) {
                // modify current element
                arr[i] = arr[i - 1];
            }
            else {
                // modify previous element
                arr[i - 1] = arr[i];
            }
        }
    }

    return true;
}

int main() {
    vector<int> arr = {-2, 7, -1, 0, 1, 2};    
    
    if(isPossible(arr)) {
        cout << "\nPossible.";
    }
    else {
        cout << "\nNot Possible.";
    }

    cout << endl;
    return 0;
}