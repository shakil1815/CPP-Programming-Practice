#include <iostream>
using namespace std;

class abc;

class xyz{
    int x;
public:
    void setvalue(){
        cout<<"enter: ";
        cin>>x;
    }
    friend void max(xyz m,abc n);
};

class abc{
    int a;
public:
    void setvalue(){
        cout<<"enter: ";
        cin>>a;
    }
    friend void max(xyz m,abc n);
};

void max(xyz m,abc n){
    if(m.x > n.a){
        cout<<m.x<<endl;
    }
    else{
        cout<<n.a<<endl;
    }
}

int main(){

    xyz m;
    abc n;

    m.setvalue();
    n.setvalue();

    max(m,n);

    return 0;
}