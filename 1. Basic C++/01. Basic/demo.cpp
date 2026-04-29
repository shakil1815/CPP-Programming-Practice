#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(10,6);
    for(int val: v){
        cout<<val<<" ";
    }
}

