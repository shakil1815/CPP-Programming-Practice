#include<bits/stdc++.h>
using namespace std;
int main(){
    //With Using third variable :
    int a;
    cout<<"enter a:";
    cin>>a;
    int b;
    cout<<"enter b:";
    cin>>b;
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;


     //Without Using third variable :
    // int a;
    // cout<<"enter a:";
    // cin>>a;
    // int b;
    // cout<<"enter b:";
    // cin>>b;
    // a=a+b;
    // b=a-b;
    // a=a-b;
    // cout<<a<<" "<<b;
}
