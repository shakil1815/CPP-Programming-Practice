#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=15;
    cout<<"_builtin_popcount: "<<__builtin_popcount(a)<<endl;

    long int b=20;
    cout<<"_builtin_popcount: "<<__builtin_popcountl(b)<<endl;

    long long int c=115;
    cout<<"_builtin_popcount: "<<__builtin_popcountll(c)<<endl;
}