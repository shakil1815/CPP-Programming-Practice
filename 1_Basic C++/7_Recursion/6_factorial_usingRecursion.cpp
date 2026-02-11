#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1); // samne else na dile ou hobe
}
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    fact(n);
    cout << fact(n);
}