/* Given a matrix 'a' of dimension n x m and 2 
coordinates(l1, r1) and (l2, r2). Return the
 sum of the rectangle from (l1, r1) to (l2, r2).*/

 #include <bits/stdc++.h>
using namespace std;
int main()
{
        int arr[5][5]={
            {5,3,9,6,7},
            {5,6,2,1,4},
            {6,3,7,8,9},
            {2,1,4,6,5},
            {8,6,8,2,6}
};
int sum=0;             
        //suppose (1,1) and (4,2)
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            sum +=arr[i][j];  
        }
    }
    cout<<"The sum of rectangle elements is:"<<sum<<endl;
}