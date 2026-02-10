#include <bits/stdc++.h>
using namespace std;
int main()
{
       int arr[3][3]={5,3,9,6,7,5,6,2,1};
       int mn=INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(mn>arr[i][j]) mn=arr[i][j];
        }
    }
    cout<<"The Minimum elements is:"<<mn<<endl;
}