#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

//                      (2)

// Another same type questions:
//               1 2 3 4
//               1 2 3
//               1 2
//               1

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
//             cout <<j<<" ";
//         }
//         cout << endl;
//     }
// }

//                      (3)

// Another same type questions:
//               1 1 1 1 
//               2 2 2 
//               3 3
//               4

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
//             cout <<i<<" ";
//         }
//         cout << endl;
//     }
// }



//                       (4)

// Another same type questions:
//               A B C D
//               A B C
//               A B
//               A

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n:";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout <<(char)(j+64)<<" ";
//         }
//         cout << endl;
//     }
// }