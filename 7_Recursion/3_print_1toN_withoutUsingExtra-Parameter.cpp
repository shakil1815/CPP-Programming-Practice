#include <bits/stdc++.h>
using namespace std;
void nm(int x, int n)
{
    if (x > n) return; //base case
    cout << x << endl;   //work
    nm(x + 1, n);       //call
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
//     if (n == 0) return;  //base case
//     nm(n - 1);    //call
//     cout << n << endl;   /work
// }
// int main()
// {
//     int n;
//     cout << "Enter n:";
//     cin >> n;
//     nm(n);
// }