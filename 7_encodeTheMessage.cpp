#include <bits/stdc++.h>
using namespace std;

string encode(string &str) {
    string encoded;
    
    for (int i = 0; i < str.length(); ++i) {
        // Count occurrences of the current character
        int count = 1;
        while (i + 1 < str.length() && str[i] == str[i + 1]) {
            ++count;
            ++i;
        }
        
        // Append character and count to the encoded string
        encoded += str[i];
        encoded += to_string(count);
    }
    
    return encoded;
}

int main() {
    string str = "aaaabbbccdaa";

    cout << "\nOriginal String is: " << str;

    string output = encode(str);

    cout << "\nEncoded String is: " << output;
    
    cout << endl;
    return 0;
}