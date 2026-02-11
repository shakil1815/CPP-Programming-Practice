#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << 2 * j - 1 << " ";
        }
        cout << endl;
    }
}

//                          (2)

// Another same type Questions:
//                 1
//                 3 5
//                 7 9 11
//                 13 15 17 19

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter n:";
//     cin >> n;
//     int a=1;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout <<a<< " ";
//             a +=2;
//         }
//         cout << endl;
//     }
// }