#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int* game_with_number(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        arr[i] = arr[i] | arr[i + 1];
    }
    
    return arr;
}

int main() {
    int arr[] = {10, 11, 1, 2, 3};
    int n = 5;

    cout << "\nInput Array: ";
    printArray(arr, n);

    int *arr2;
    arr2 = game_with_number(arr, n);

    cout << "\nOutput Array: ";
    printArray(arr2, n);
    
    cout << endl;
    return 0;
}