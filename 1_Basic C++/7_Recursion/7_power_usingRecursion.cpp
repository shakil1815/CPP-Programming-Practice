#include <bits/stdc++.h>
using namespace std;
int power(int a, int b)
{
    if (b==0) return 1;
    return a * power(a,b - 1); // samne else na dile ou hobe
}
int main()
{
    int b;
    cout << "Enter base:";
    cin >> b;
    int p;
    cout << "Enter power:";
    cin >> p;
    cout <<b<<" Power "<<p<<" :"<< power(b,p);
}