#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    int product=1;
    cout << "Enter the Elements:";
    for (int i = 0; i < 5; i++){
        cin >> arr[i];
        product *= arr[i];
    }
    cout << "Sum of all Elements:";
        cout <<product;
}