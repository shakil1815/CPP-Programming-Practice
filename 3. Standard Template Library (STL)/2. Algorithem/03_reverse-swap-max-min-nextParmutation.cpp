#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    //reverse:
    vector<int>v = {1,2,3,4,5};
    reverse(v.begin(),v.end());
    cout<<"reverse() : ";
    for(int val: v){
        cout<<val<<" ";
    }

    //Next Parmutation: 
    string s="abc";
    next_permutation(s.begin(),s.end());
    cout<<endl<<"Next Parmutation: "<<s<<endl;

    //privious Parmutation: 
    string s1="acb";
    prev_permutation(s1.begin(),s1.end());
    cout<<"privious Parmutation:"<<s1<<endl;
    
    //swap:
    int a =9,b=7;
    swap(a,b);
    cout<<"a = "<<a<<" "<<"b = "<<b<<endl;

    //max and min
    cout<<"Max : "<<max(4,7)<<endl<<"Min : "<<min(4,7)<<endl;
    cout<<endl<<endl;
}