#include <bits/stdc++.h>
using namespace std;
int main()
{
       int arr[2][2]={5,3,9,6};
       int brr[2][2]={8,9,4,3};
       int crr[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            crr[i][j]=arr[i][j]+brr[i][j];
        }
        cout << endl;
    }
    cout<<"The Matrix is:"<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << crr[i][j] << " ";
        }
        cout << endl;
    }
}