#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << (char)(j + 64) << " ";
        }
        cout << endl;
    }
}

// Another questions:
// Print :  a b c d
//          a b c d
//          a b c d
//          a b c d

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number:";
//     cin >> n;
//     for (int i = 1; i <= n; i++){
//         for(int j=1; j<=n; j++){
//             cout<<(char)(j+64)<<" ";
//         }
//         cout<<endl;
//     }
// }

// Another Question:
//                 A A A A
//                 B B B B
//                 C C C C
//                 D D D D

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number:";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << (char)(i + 64) << " ";
//         }
//         cout << endl;
//     }
// }
