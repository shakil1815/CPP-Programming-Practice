#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Method-1:

    int arr[5];
    // arr[0] = 5,
    // arr[1] = 4,
    // arr[2] = 9,
    // arr[3] = 3,
    // arr[4] = 8,

    // method - 2:
    // int arr[5] = {5, 6, 8, 6, 8};

    // input method

            cout<< "enter array elements:";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    // output
             cout << "array elements are:";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
             cout << "Upate array elements are:";
    arr[0]=100;
     for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}