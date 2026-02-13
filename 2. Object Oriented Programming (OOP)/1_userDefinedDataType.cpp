#include<iostream>
using namespace std;
//class declaretion:
class student{ //student ia a new data type
public:
    string name;
    int roll;
    float gpa;
};
int main(){
    student s1;
    //Class initialization Method-1
    s1.name="Shakil";
    s1.roll= 240201009;
    // s1.gpa=3.00;
      //Input ou newa jay 
    cin>>s1.gpa;
      //update ou kora jay
    s1.gpa=4.00;
    
    student s2;
    s2.name="Fahim";
    s2.roll= 240201005;
    s2.gpa=3.95;

    cout<<s1.name<<" "<<s1.roll<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.roll<<" "<<s2.gpa<<endl;
}