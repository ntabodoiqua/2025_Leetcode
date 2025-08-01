#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false;
    if (x == 0) return true;
    if (x % 10 == 0) return false;
    int reverted_number = 0;
    while (x > reverted_number) {
        reverted_number = reverted_number*10 + x%10;
        x /= 10;
    }
    return x == reverted_number || x == reverted_number/10;
}

int main() {
	int x = 11;
    cout << isPalindrome(x);
    return 0;
}

// Code cũ:
// bool isPalindrome(int x) {
//     if (x < 0) return false;
//     if (x == 0) return true;
//     vector<int> v;
//     while (x != 0) {
//         v.push_back(x%10);
//         x /= 10;
//     }
//     for (int i = 0; i <= v.size()/2; i++) {
//         if (v[i] != v[v.size() - 1 - i]) return false;
//     }
//     return true;
// }