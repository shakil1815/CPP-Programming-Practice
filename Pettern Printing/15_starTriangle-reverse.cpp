#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

//                     (2)

// Another same type question:
//                   1
//                 1 2
//               1 2 3
//             1 2 3 4

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n:";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i+1; j++)
//         {
//             cout << "  ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout <<j<<" ";
//         }
//         cout << endl;
//     }
// }


//                          (3)
// Another same type question:
//                   A
//                 A B
//               A B C 
//             A B C D

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n:";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i+1; j++)
//         {
//             cout << "  ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout <<(char)(j+64)<<" ";
//         }
//         cout << endl;
//     }
// }

