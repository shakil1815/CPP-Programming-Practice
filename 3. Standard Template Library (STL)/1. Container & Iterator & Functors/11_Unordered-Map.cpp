#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string , int >om;
    om.emplace("laptop",100);
    om.emplace("laptop",80);
    om.emplace("laptop",30);
    om.emplace("laptop",40);  
    /* unordered map ey same key repeat hoy na
    map and unordered ,map same but om ey time and space complexsity
    kom hoy tai om besi use kora hoy and redomly print hoy mane sorted 
    vabe print hoy na 
    */

    for(auto p: om){
        cout<<p.first<<" "<<p.second<<endl;
    }
}