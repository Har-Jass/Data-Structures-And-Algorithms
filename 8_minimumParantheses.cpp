#include <bits/stdc++.h>
using namespace std;

int minimumParentheses(string pattern) {
    stack<char> parenthesesStack;
    int count = 0;

    for (char ch : pattern) {
        if (ch == '(') {
            parenthesesStack.push('(');
        } 
        else if (ch == ')') {
            if (!parenthesesStack.empty()) {
                parenthesesStack.pop();
            } 
            else {
                count++;
            }
        }
    }

    return count + parenthesesStack.size();
}

int main() {
    string pattern = ")((()";

    cout << "\nOriginal String is: " << pattern << endl;

    int ans = minimumParentheses(pattern);

    cout << "\nMinimum number of parentheses required to make a string valid are: " << ans;
    
    cout << endl;
    return 0;
}