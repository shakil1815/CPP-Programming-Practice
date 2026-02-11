#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Reversing substring from index 2 to 5 (inclusive)
    // The range [first, last) requires the end iterator to be one past the last element.
    // So we use s.begin() + 6 to include index 5.
    if (s.length() > 5) {
        reverse(s.begin() + 2, s.begin() + 6);
    }

    cout << s << endl;

    return 0;
}