#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    int sum=0;
    cout << "Enter the Elements:";
    for (int i = 0; i < 5; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of all Elements:";
        cout <<sum;
}


// Important array size na diye array use:

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[] = {4, 3, 9, 8, 5, 6, 7};
//     int n = sizeof(arr) / 4;
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     cout << "Sum of all Elements:";
//     cout << sum;
// }