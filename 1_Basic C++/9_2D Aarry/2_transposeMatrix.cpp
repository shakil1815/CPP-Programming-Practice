#include <bits/stdc++.h>
using namespace std;
int main()
{
       int arr[3][2]={2,3,6,1,6,8};
      cout<<"The Matrix is:"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"The Transpose Matrix is:"<<endl;
    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}