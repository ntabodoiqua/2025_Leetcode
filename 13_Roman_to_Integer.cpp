#include<bits/stdc++.h>
using namespace std;
int convert_Roman_char_to_Int(char c) {
    if (c == 'I') return 1;
    if (c == 'V') return 5;
    if (c == 'X') return 10;
    if (c == 'L') return 50;
    if (c == 'C') return 100;
    if (c == 'D') return 500;
    if (c == 'M') return 1000;
    return -1;
}
int romanToInt(string s) {
    int res = 0;
    stack<int> st;
    for (int i = 0; i < s.length(); i++) {
        int cur = convert_Roman_char_to_Int(s[i]);
        if (st.empty()) {
        	st.push(cur);
        	continue;
		}
        if (cur > st.top()) {
        	res += cur - st.top();
        	st.pop();
		} else {
			res += st.top();
            st.pop();
            st.push(cur);
		}
    }
    return st.empty() ? res : res + st.top();
} 

int main() {
    string s = "MCMXCIV";
    cout << romanToInt(s);
    return 0;
}
 

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000

// Example 1:

// Input: s = "III"
// Output: 3
// Explanation: III = 3.
// Example 2:

// Input: s = "LVIII"
// Output: 58
// Explanation: L = 50, V= 5, III = 3.
// Example 3:

// Input: s = "MCMXCIV" 1000 100 1000 10 100 1 5
// Output: 1994
// Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
