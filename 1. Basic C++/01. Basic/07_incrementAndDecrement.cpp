#include<iostream>
using namespace std;
int main(){
    int x=5;
    cout<<x<<endl; //5
    cout<<x++<<endl; //5
    cout<<x<<endl;   //6

    cout<<endl<<endl;
    
    cout<<x<<endl;  //6
    cout<<++x<<endl;  //7
    cout<<x<<endl;  //7
}