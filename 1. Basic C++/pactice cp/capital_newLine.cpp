#include<iostream> 
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'a' && s[i]<= 'z'){
            s[i] = s[i] -32;
        }
    }
    for(int i=0; i<s.size(); i++){
        if(s[i] == ' '){
           cout<<endl;
        }
        else cout<<s[i];
    }
    cout<<endl;
    return 0;
}


// #include<iostream>
// using namespace std;

// char upper(char c){
//     return 'A' + (c - 'a');
// }

// int main(){
//     while(true){
//         string s;
//         cin >> s;
//         if(s.size() == 0){
//             break;
//         }
//         for(int i = 0; i < s.size(); ++i){
//             s[i] = upper(s[i]);
//         }
//         cout << s << endl;

//     }
// }



// #include <iostream>
// using namespace std;
// int main()
// {
//     string s;
//     while (true)
//     {
//         cin >> s;
//         if (s.size() == 0)
//             break;
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (s[i] >= 'a' && s[i] <= 'z')
//             {
//                 s[i] = s[i] - 32;
//                 // 32 diye biyog korle capital pawa jay
//             }
//         }
//         cout << s << endl;
//     }
//     return 0;
// }