#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 8, 9, 7, 2};
    int n = 5;
    int brr[5];

    for (int i = 0; i < n; i++) {
        brr[i] = arr[n - 1 - i];
    }

    bool isPalindrome = true;
    for (int i = 0; i < n; i++) {
        if (arr[i] != brr[i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) cout << "Palindrome";
    else cout << "Not Palindrome";

    return 0;
}

// //Without Extra Array :
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     bool isPalindrome = true;
//     for (int i = 0; i < n / 2; i++) {
//         if (arr[i] != arr[n - 1 - i]) {
//             isPalindrome = false;
//             break;
//         }
//     }

//     if (isPalindrome) cout << "Palindrome";
//     else cout << "Not Palindrome";
// }