#include <bits/stdc++.h>
using namespace std;
void nm(int x, int n)
{
    if (x > n)
        return;
    cout << x << endl;
    nm(x + 1, n);
}
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    nm(1, n);
}

// Alternative and best:

// #include <bits/stdc++.h>
// using namespace std;
// void nm(int n)
// {
//     if (n == 0)
//         return;
//     nm(n - 1);
//     cout << n << endl;
// }
// int main()
// {
//     int n;
//     cout << "Enter n:";
//     cin >> n;
//     nm(n);
// }