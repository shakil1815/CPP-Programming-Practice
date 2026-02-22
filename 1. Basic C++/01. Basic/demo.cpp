#include<iostream> 
using namespace std;
class lamia{
public:
    string nikename;
    int rollno;
    float cgpa;
    
    lamia(){   }
    lamia(string nikename,int rollno,float cgpa){
        this->nikename=nikename;
        this->rollno=rollno;
        this->cgpa=cgpa; 
    }
    // void print(){
    //     cout<<"nikename: "<<nikename<<" "<<"rollno: "<<rollno<<" "<<"cgpa: "<<cgpa<<endl;
    // }
};
void print(lamia s){
    cout<<"nikename: "<<s.nikename<<" "<<"rollno: "<<s.rollno<<" "<<"cgpa: "<<s.cgpa<<endl;
}
int main(){
    lamia s1("sabinaa",2,3.25);
    print(s1);
    //  lamia s2("sanjida",1,4.00) ;
    //  s2.print();
}