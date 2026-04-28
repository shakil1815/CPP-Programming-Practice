#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

    /*    Sorting rules :
        sort( arr , arr+n );
        Reverse sort: sort( arr , arr+n , greater<int>() );
        sort(v.begin() , v.end());
    */
    cout<<"sort: ";
    int ar[5] = {5, 6, 3, 7, 1};
    sort(ar,ar+5);
    for(int val: ar){
        cout<<val<<" ";
    }

    cout<<endl<<"reverse sort: ";  //using functors
    int ar1[5] = {5, 6, 3, 7, 1};
    sort(ar1,ar1+5,greater<int>());
    for(int val1: ar1){
        cout<<val1<<" ";
    }

    cout<<endl<<"vector: ";
    vector<int>v = {3,1,8,9,7};
    sort(v.begin(),v.end());
    for(int val2: v){
        cout<<val2<<" ";
    }

    cout<<endl<<"vector pair: "<<endl;
    vector< pair<int ,int >>v2 = {{5,3},{6,5},{8,2}};
    sort(v2.begin(),v2.end());
    for(auto p: v2){
        cout<<p.first<<" "<<p.second<<endl;
    }
}