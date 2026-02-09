#include<bits/stdc++.h>
using namespace std;
void nm(int n){
    if(n==0) return;
    cout<<n<<endl;
    nm(n-1);
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    nm(n);
}