#include <bits/stdc++.h>
using namespace std;

long long power(long long a, long long b) {
    if (b == 0) return 1;
    long long res = power(a, b / 2);
    if (b % 2 == 0)
        return res * res;
    else
        return res * res * a;
}

int main() {
    long long a, b;
    cout << "Enter base:";
    cin >> a;
    cout << "Enter power:";
    cin >> b;
    cout << power(a, b) << endl;
    return 0;
}