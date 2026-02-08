#include <iostream>
using namespace std;

long long fact(int x) {
    long long f = 1;
    for (int i = 1; i <= x; i++) {
        f *= i;
    }
    return f;
}

int nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        for (int s = 1; s <= rows - i; s++) {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++) {
            cout << nCr(i, j) << "   ";
        }
        cout << endl;
    }

    return 0;
}



//                          (2)
//Another same type question: pascal triangle

// #include <iostream>
// using namespace std;

// long long fact(int x) {
//     long long f = 1;
//     for (int i = 1; i <= x; i++) {
//         f *= i;
//     }
//     return f;
// }

// int nCr(int n, int r) {
//     return fact(n) / (fact(r) * fact(n - r));
// }

// int main() {
//     int rows;
//     cout << "Enter number of rows: ";
//     cin >> rows;

//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j <= i; j++) {
//             cout << nCr(i, j) << "   ";
//         }
//         cout << endl;
//     }

//     return 0;
// }