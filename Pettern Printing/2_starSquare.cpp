#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    for (int i = 1; i <= n; i++){ //rows=r
        for(int j=1; j<=n; j++){ //columns=c
            cout<<"* ";
        }
        cout<<endl;
    }
}