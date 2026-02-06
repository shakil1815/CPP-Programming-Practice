#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int ld=0;
    int sum=0;
    while(n !=0){
       int ld=n%10;
       n=n/10;
       sum+=ld;  
    }
    cout<<sum;
}

/*
Hints: 10  diye vag korle ekta ekta digit komte thake 
and 
10 diye % mudulo korle last digit pawa jay

*/