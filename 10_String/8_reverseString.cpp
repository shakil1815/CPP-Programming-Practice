#include <iostream>
#include <string>
using namespace std;
int main(){
    string s = "raghav";
    cout<<s<<endl;
    int n = s.length();
    int i = 0;
    int j = n-1;
    while(i<j){
        int temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    cout<<s<<endl;
}

/*
using build in function:
    reverse(s.begin(),s.end());
    cout<<"reverse() : "<<s; 
*/