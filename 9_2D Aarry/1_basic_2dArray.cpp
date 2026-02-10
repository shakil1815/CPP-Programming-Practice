#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Input Method
                         //Method-1
    int arr[2][2];
    cout<<"Enter matrix element:"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>>arr[i][j];
        }
    }
    
    // Initialization Method:

    //                   // Method-2
    // int arr[2][2];
    // arr[0][0] = 5;
    // arr[0][1] = 9;
    // arr[1][0] = 6;
    // arr[1][1] = 7;

    //                     // Method-3
    // int arr[2][2] = {{4, 3}, {7, 6}};

    //                     //Method-4
    //    int arr[2][2]={2,3,6,1};

    //                      //Method-5
    // int arr[][2]={1,2,3,4};

    // output:
    cout<<"The Matrix is:"<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}