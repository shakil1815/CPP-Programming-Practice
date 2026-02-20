#include<iostream>
using namespace std;
int main()
{
    int matrix[3][3]={
               {2,3,4},
               {4,8,9},
               {9,1,3}
               
        };
   int sum=0;
   int bolded[3][3]={
            {1,0,0},
            {0,1,0},
            {0,0,1}
    };
  for(int i=0; i<=3; i++){
     for(int j=0; j<=3; j++){
           if(bolded[i][j]==1){
               sum+=matrix[i][j];
               }
        } 
    }
    cout<<sum;
    return 0;
}