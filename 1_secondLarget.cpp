#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr) {
    // running a loop to print the array
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// this function find the second largest element in the array
int findSecondLargest(vector<int> &arr) {
    // check if the array has at least two elements
    if(arr.size() < 2) {
        return -1;
    }

    // initialize variables to keep track of the two largest elements
    int firstLargest = INT_MIN;
    int secondLargest = INT_MIN;

    // iterate through the array to find the two largest elements
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] > firstLargest) {
            // update both largest elements if a new largest is found
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } 
        else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            // update the second largest element if a new second largest is found
            secondLargest = arr[i];
        }
    }

    // check if a second largest element was found
    if (secondLargest == INT_MIN) {
        return -1;
    }

    // return the second largest element
    return secondLargest;
}

int main() {
    vector<int> arr = {-10, -40, -25, -12, -25, -10};
    
    // printing array
    cout << "\nGiven array is ";
    printArray(arr);

    // finding second largest element of the array
    int secondLargest = findSecondLargest(arr);

    if(secondLargest == -1) {
        cout << "\nThere is no second largest element in the array";
    }
    else {
        cout << "\nSecond Largest Element is " << secondLargest;
    }

    cout << endl;
    return 0;
}