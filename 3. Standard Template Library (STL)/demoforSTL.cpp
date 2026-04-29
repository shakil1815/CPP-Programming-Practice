#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool com(pair<int,int>p1,pair<int,int>p2){
    if(p1.first<p2.first) return true;
    if(p1.first>p2.first) return false;
    if(p1.second<p2.second) return true;
    else return false;
}
int main(){
    vector<pair<int,int>>vec={{9,6},{6,3},{2,3}};
    sort(vec.begin(),vec.end(),com);
    for(auto p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
}