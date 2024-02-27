#include <bits/stdc++.h>
using namespace std;

string reverseStringWordWise(string str) {
    // reverse the entire string
    reverse(str.begin(), str.end());

    // take a temporary string variable
    string word;

    // take one more string variable which stores the final result
    string reversedString;

    // run a loop over each character on the reversed input string
    for(char c : str) {
        // if we encountered a space
        if(c == ' ') {
            // reverse the word stored in word string
            reverse(word.begin(), word.end());

            // add the word in reversedString variable and add a space also
            reversedString += word + ' ';

            // clear the word variable to store next word
            word.clear();
        }
        // if there is no space
        else {
            // then we add the character into the word variable
            word += c;
        }
    }

    // reverse the last word
    reverse(word.begin(), word.end());

    // add last word to the reversedString variable
    reversedString += word;

    // return the character wise reversed string
    return reversedString;
}

int main() {
    string str = "Welcome to Coding Ninjas";

    string ans = reverseStringWordWise(str);
    cout << ans << endl;

    cout << endl;
    return 0;
}