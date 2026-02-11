#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    int mx=INT_MIN;
    cout << "Enter the Elements:";
    for (int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++){
        if(mx<arr[i]) mx=arr[i]; //without build in function
        // mx =max(mx,arr[i]); //USE build in function
    }
    cout << "The maximum Elements:";
        cout <<mx;
}