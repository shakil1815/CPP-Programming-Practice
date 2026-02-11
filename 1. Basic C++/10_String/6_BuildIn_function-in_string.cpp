 #include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"enter string : ";
    getline(cin,s);

    // // 1. size() or, length() -->size ber kore
    // cout<<"size()/length() :"<s.size()<<endl;
    
    // // 2. push_back() --> sesh ey add kore
    // s.push_back('a');
    // cout<<"push_back() : "<<s;

    // // 3. pop_back() -->pichon diye ekta kore letter remove kore
    // s.pop_back();
    // cout<<"pop_back() : "<<s;

    // // 4. append() --> new word add kore 
    // s.append(" ahmed");
    // cout<<"append() : "<<s;
    // // append ar por string ar length upadate hoy

    // // 5. clear() --> string ta clear kore fele kisu thake na
    // s.clear();
    // cout<<"clear() : "<<s;

    // 6. reverse() --> string reverse kore 
    reverse(s.begin(),s.end());
    cout<<"reverse() : "<<s;


}