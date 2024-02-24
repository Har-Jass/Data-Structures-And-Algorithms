#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr) {
    // running a loop to print the array
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<int> rotateArray(vector<int>arr, int k) {
    int n = arr.size();
    vector<int> result(n);

    for (int i = 0; i < n; ++i) {
        // calculate the new index after rotation
        int newIndex = (i - k + n) % n;
        
        result[newIndex] = arr[i];
    }

    // returning the updated array after rotating
    return result;
}

int main() {
    vector<int> arr = {1, 3, 6, 11, 12, 17, 22, 26, 30, 33, 38};
    int k = 7;

    // printing array before rotating
    cout << "\nArray before rotating: ";
    printArray(arr);

    vector<int> result = rotateArray(arr, k);

    // printing array after rotating k times
    cout << "\nArray after rotating: ";
    printArray(result);

    cout << endl;
    return 0;
}