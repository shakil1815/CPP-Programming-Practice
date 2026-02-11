#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n + sum(n - 1); // samne else na dile ou hobe
}
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    sum(n);
    cout << sum(n);
}