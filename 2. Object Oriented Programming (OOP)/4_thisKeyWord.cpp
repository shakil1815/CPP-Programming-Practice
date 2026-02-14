#include <iostream>
using namespace std;
class cricketer
{
public:
    string name;
    int runs;
    float avg;

           /* ei vabe dile somossa nai kintu perameter ar
              variable ar nam elada thakte hobe */
    // cricketer(string n,int r,float a){
    //     name = n;
    //     runs = r;
    //     avg = a;
    // }

    // using this keyword -> ek name use kora jay
    cricketer(string name, int runs,float avg)
    {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

    void print()  // class ar modde function likhle perameter na likhleo class ar element aashe jay
    {                                        
        cout << name << " " << runs <<" "<<avg << endl; // tokhn c(.dot) dite hoy na
    }

    // function ey perameter dile
    void test(int runs)
    {
        cout << name << " " << this->runs <<" "<<avg<< endl; // tokhn c(.dot) dite hoy na
        cout<<runs<<endl;
    }

    int matches(){
        return runs/avg;
    }
};

int main()
{
    cricketer c1("Maxwell", 25000,80);
    cricketer c2("liton das", 18000,66);

    // cout << c1.name << " " << c1.runs <<" "<< avg << endl;
    // cout << c2.name << " " << c2.runs <<" "<< avg << endl;

    c1.test(444);
                  /* upor ey function ey this keyword use korchi tai ekhn function ey kisu
                     pass korle oita ou print hobe ager value ar sathe kono replace hobe na */

    c1.print();
    c2.print();
    
    cout<<c1.matches()<<endl;
    cout<<c2.matches()<<endl;
}