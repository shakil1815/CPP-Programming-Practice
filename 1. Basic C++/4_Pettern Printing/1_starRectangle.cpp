#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cout << "enter rows:";
    cin >> r;
    int c;
    cout << "enter columns:";
    cin >> c;
    for (int i = 1; i <= r; i++){ //rows=r
        for(int j=1; j<=c; j++){ //columns=c
            cout<<"* ";
        }
        cout<<endl;
    }
}