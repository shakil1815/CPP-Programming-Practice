 #include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"enter string : ";
    getline(cin,s);
    int n=s.length();
    int count=0;
    for(int i=0; i<n; i++){
        if(s[i]=='A'|| s[i]=='E' || s[i]=='O'|| s[i]=='I'||
        s[i]=='u'||s[i]=='a'||s[i]=='e'||s[i]=='o'||
        s[i]=='i'||s[i]=='u'){
            count++;
        }
    }
    cout<<"Tne number of vowel : "<<count;
    
}