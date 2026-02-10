#include <bits/stdc++.h>
using namespace std;
int main()
{
       int arr[3][3]={5,3,9,6,10,11,3,7,5};
       int mx=INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(mx<arr[i][j]) mx=arr[i][j];
        }
    }
    cout<<"The Maximum elements is:"<<mx<<endl;
}