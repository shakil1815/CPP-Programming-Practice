#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={5,8,9,7,2};
    int mx=INT_MIN;
    int smx=INT_MIN;
    for(int i=0; i<5; i++){
        if(mx<arr[i]) mx=arr[i];
    }
    for(int i=0; i<5; i++){
        if(smx<arr[i] && mx != arr[i]) smx=arr[i];
    }
    cout<<"Second Maximum: "<<smx;
    
}