#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comparator(pair<int,int >p1,pair<int,int>p2){
        if(p1.second < p2.second) return true;
        if(p1.second > p2.second) return false;

        if(p1.first < p2.first) return true;
        else return false;
}
int main()
{
    vector< pair<int ,int >>v2 = {{5,3},{9,5},{8,2},{6,1},{2,1}};
    sort(v2.begin(),v2.end(),comparator);
    for(auto p: v2){
        cout<<p.first<<" "<<p.second<<endl;
    }
}