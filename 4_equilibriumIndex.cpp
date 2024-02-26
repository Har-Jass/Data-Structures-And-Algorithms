#include <bits/stdc++.h>
using namespace std;

int findEquilibriumIndex(vector<int> &arr) {
    // first we find the total sum of the array
    int totalSum = 0;
    for(int i = 0; i < arr.size(); i++) {
        totalSum = totalSum + arr[i];
    }

    // now we declare a leftSum variable to 0 and iterate through the array to find the equilibrium index
    int leftSum = 0;
    for(int i = 0; i < arr.size(); i++) {
        // now we subtract the current element from totalSum variable to get the rightSum
        totalSum = totalSum - arr[i];

        // now we check if leftSum and rightSum are equal
        if(leftSum == totalSum) {
            // if yes, then we found the equilibrium index
            return i;
        }

        // if leftSum and rightSum are not equal then we add the current element to the leftSum
        leftSum = leftSum + arr[i];
    }

    // if no equilibrium index found, then we return -1
    return -1;
}

int main() {
    vector<int> arr = {1, 7, 3, 6, 5, 6};

    int result = findEquilibriumIndex(arr);

    if(result != -1) {
        cout << "\nEquilibrium Index is " << result;
    }
    else {
        cout << "\nThere is no Equilibrium Index present in the array.";
    }
    
    cout << endl;
    return 0;
}