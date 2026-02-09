#include <bits/stdc++.h>
using namespace std;
void nm(int n)
{
    if (n == 0) return;  //base case
    cout << n << endl;   //work
    nm(n - 1);        //call
}
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    nm(n);
}