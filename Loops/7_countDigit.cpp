#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int count=0;
    int i=0;
    while(n !=0){
       n=n/10;
       count++;  
    }
    cout<<count;
}

/*
Hints: 10  diye vag korle ekta ekta digit komte thake 
*/