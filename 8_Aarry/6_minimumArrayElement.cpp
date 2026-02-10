#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    int mn=INT_MAX;
    cout << "Enter the Elements:";
    for (int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++){
        if(mn>arr[i]) mn=arr[i]; //without build in function
        // mn =min(mn,arr[i]); //USE build in function
    }
    cout << "The minimum Elements:";
        cout <<mn;
}