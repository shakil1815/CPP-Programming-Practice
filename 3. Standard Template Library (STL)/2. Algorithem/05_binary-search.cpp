#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v={4,7,3,8};
    cout<<"Binary search: "<<binary_search(v.begin(),v.end(),3)<<endl;
    cout<<"Binary search: "<<binary_search(v.begin(),v.end(),1)<<endl;
}