#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int product=1;
    int i=0;
    while(n !=0){
        int ld=n%10;
       n=n/10;
       product*=ld;
    }
    cout<<product;
    // cout<<endl;
    // for(int i=n; i>0; i /=10){
    //     product= product*(i%10);
    // }
    // cout<<product;
}