/*
map ey key gulo unique thake and same key ber ber likhle ekbar e
count hobe but multimap ey key same but ber ber thakle ber ber count 
hobe and alpabet letter ar onujai acending order onujai sorting hoy
*/
#include <iostream>
#include <map>
#include<algorithm>
using namespace std;
int main()
{
    multimap<string ,int>m;
    m.emplace("laptop",20) ;
    m.emplace("laptop",10);
    m.emplace("laptop",60);

    //m.erase("laptop"); //key ei vabe use korle oi key ar sob remove hoy

    m.erase(m.find("laptop")); /* ei vabe surdu step by ekta kore remove
                                 dite thake */
    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }
}