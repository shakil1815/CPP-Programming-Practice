#include<iostream>
using namespace std;
void sum(int n);
int main(){
    int n;
    cin>>n;
    sum(n);
}
void sum(int n){
    if(n%2==0) cout<<"even";
    else cout<<"odd";
}


