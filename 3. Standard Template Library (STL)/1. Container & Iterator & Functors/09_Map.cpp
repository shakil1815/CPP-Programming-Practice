/*
Map (ম্যাপ):এটি "Key-Value" জোড়া আকারে ডেটা স্টোর করে।
ইনডেক্সের (০, ১, ২...) বদলে এখানে নির্দিষ্ট 'Key' দিয়ে ডেটা (Value)
অ্যাক্সেস করতে হয়। (যেমন: ডিকশনারিতে কোনো শব্দের অর্থ খোঁজার মতো)
map ey key gulo unique thake and same key ber ber likhle ekbar e
count hobe
and alpabet letter ar onujai acending order onujai sorting hoy
*/
#include <iostream>
#include <map>
#include<algorithm>
using namespace std;
int main()
{
    map<string, int> m;
    m["laptop"] = 100;
    m["laptop"] = 100; // duplicate
    m["laptop"] = 180; // update mathoad
    m["tablet"] = 50;
    m["mobile"] = 60;

    m.insert({"nickband", 70});//insert mathoad

    for (auto val : m)
    {
        cout << val.first << " " << val.second << endl;
    }

    cout<<"count: "<<m.count("laptop")<<endl; // count 

    cout<<"key value: "<<m["laptop"]<<endl;
    auto it=m.find("laptop");
    if(it != m.end()){
        cout<<"found";
    }
    else cout<<"not found";
}