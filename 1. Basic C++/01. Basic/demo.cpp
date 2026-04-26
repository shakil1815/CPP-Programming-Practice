#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main(){
    list<int>l;
    l.push_back(5);
    l.push_back(2);
    l.push_back(4);
    for(int val:l){
        cout<<val<<" ";
    }
    cout<<endl;
   l.pop_front();
   for(int val:l){
    cout<<val<<" ";
   }

   cout<<endl;
   l.push_back(6);
   l.push_back(3);
   auto it =l.begin();
   advance(it,1);
   *it = 10;
   for(int val: l){
    cout<<val<<" ";
   }

   cout<<endl;
   auto it2= find(l.begin(),l.end(),10);
   if(it2 != l.end()){
       cout<<"element is found "<<*it2;
   }
   else cout<<"element is not found";
}


hoga andhero se