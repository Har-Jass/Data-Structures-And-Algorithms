#include <bits/stdc++.h>
using namespace std;

void solve(string s, int i, vector<string> &ans, string temp) {
	// base case
	// if index is equal to given string's length
	// it means we have successfully traversed the string completely
	if(i == s.length()) {
	    // now we check that if temp string has something stored in it
	    // then we push the string to the ans vector
	    if(temp.length()) {
	        ans.push_back(temp);
	    }
	            
	    // and return to the previous call
	    return;
	}
	        
	// ---- Exclude Case ----
	// exclude the current character from the subsequence list
	solve(s, i + 1, ans, temp);
	        
	// ---- Include Case ----
	// include the current character to the subsequence list
	temp += s[i];
	       
	// call the function recursively for next character
	solve(s, i + 1, ans, temp);
}

vector<string> AllPossibleStrings(string s) {
	// create a vector to store all the subsequences
	vector<string> ans;
		    
	// set starting index, from where we start finding the subsequences
	int i = 0;
		    
	// create an empty temporary string, which store each subsequence and then we push this string into the ans vector
	string temp = "";
		    
	// call solve() function, which find out all the subsequences
	solve(s, i, ans, temp);
		    
	// after getting the result in the ans vector, we sort the vector to return the result
	sort(ans.begin(), ans.end());
		    
	// at the end we return the ans vector, which stores all the subsequences
	return ans;
}

int main() {
    string s = "abc";

    vector<string> ans = AllPossibleStrings(s);

    cout << "\nSubsequences of " << s << " are: ";
    for(string s : ans) {
        cout << s << " ";
    }
    
    cout << endl;
    return 0;
}