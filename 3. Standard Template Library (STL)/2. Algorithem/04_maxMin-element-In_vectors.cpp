#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v={4,7,3,8};
    cout<<"max element: "<<*(max_element(v.begin(),v.end()))<<endl;
    cout<<"min element: "<<*(min_element(v.begin(),v.end()))<<endl;
}