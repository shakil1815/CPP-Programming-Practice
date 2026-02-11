#include <bits/stdc++.h>
using namespace std;
int main()
{
       int arr[3][3]={5,3,9,6,7,5,6,2,1};
       int sum=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
    }
    cout<<"The Sum of all elements is:"<<sum<<endl;
}