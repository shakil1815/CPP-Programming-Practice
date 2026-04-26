#include<iostream>
#include<vector>
using namespace std;
int main(){
    pair<int,int>p1={3,8};
    cout<<"------------Pair 1------------"<<endl;
    cout<<"first: "<<p1.first<<endl;
    cout<<"second: "<<p1.second<<endl<<endl;
    
    pair<char,int>p2={'s',9};
    cout<<"-------------Pair 2-----------"<<endl;
    cout<<"first: "<<p2.first<<endl;
    cout<<"second: "<<p2.second<<endl<<endl;

    pair<int,pair<string,int>>p3={6,{"Shakil",9}};
    cout<<"-------------Pair 3-----------"<<endl;
    cout<<"first: "<<p3.first<<endl;
    cout<<"second first: "<<p3.second.first<<endl;
    cout<<"second second: "<<p3.second.second<<endl<<endl;

    vector<pair<int,int>>vec={{4,3},{9,7},{5,2}};
    
    vec.push_back({6,8});
    vec.emplace_back(3,7);//ei jaygay emplace use korar jonno 
    //pair kore pass korte hoy nai emplace sorasori object  create kore
    cout<<"-----------vector Pair 4--------"<<endl;
    for(pair<int,int>p4:vec){
        cout<<p4.first <<" "<<p4.second<<endl;
    }

}