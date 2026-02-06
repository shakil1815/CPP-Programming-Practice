#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cout<<"Enter n:";
   cin>>n;
   int a=1;
   for(int i=1; i<=2*n-1; i+=2){
    cout<<a<<" ";
    a*=2;
   }
}