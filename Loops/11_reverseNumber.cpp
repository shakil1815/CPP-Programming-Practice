#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    while(n !=0){
        int ld=n%10;
       n=n/10;
       cout<<ld;
    }
} 

/*
//Alternative way:
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int r=0;
    while(n !=0){
       int ld=n%10;
       r*=10;
       r+=ld;
       n=n/10;
    }
    cout<<r;
}
*/