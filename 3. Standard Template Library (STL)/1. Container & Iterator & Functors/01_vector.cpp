/*Vector (ভেক্টর): * এটি ডাইনামিক অ্যারে (Dynamic Array)
এর মতো কাজ করে।সাধারণ অ্যারের সাইজ ফিক্সড থাকলেও , 
ভেক্টরের সাইজ প্রয়োজন অনুযায়ী নিজে নিজেই বাড়ে বা কমে।
এর শেষে খুব সহজেই নতুন ডেটা যুক্ত বা রিমুভ করা যায় এবং
ইনডেক্স (Index) ব্যবহার করে যেকোনো ডেটা পড়া যায়।  */

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Declares an empty vector
    vector<int> v;

    /* Declares vector with given size
    and fills it with a value  */
    cout << "vector 2: ";
    //(size, each element value)
    vector<int> v2(3, 5);
    // Print items of v2
    for (int x : v2)
    {
        cout << x << " ";
    }

    cout << endl;

    // Initializes vector using
    // initializer list.
    cout << "vector 3: ";
    vector<int> v3 = {1, 2, 3, 4};
    for (int it : v3)
    {
        cout << it << " ";
    }

    cout << endl;
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);

    // FOR Each loop :
    cout << "vector : ";
    for (int it : v)
    {
        cout << it << " ";
    }

    cout<<endl;
    //copy vector
    cout<<"copy vector 4: ";
    vector<int>v4(v);
    for(int r : v4){
        cout<<r<<" ";
    }

    cout << endl;
    cout << "pop_back: ";
    v.pop_back();
    for (int it : v)
    {
        cout << it << " ";
    }

    cout << endl;
    cout << "size: " << v.size() << endl;
    ;
    cout << "capacity: " << v.capacity();

    cout << endl;
    cout << "erase: ";
    v.erase(v.begin());
    for (int it : v)
    {
        cout << it << " ";
    }

    cout << endl;
    v.push_back(5);
    v.push_back(9);
    v.emplace_back(8);
    cout << "push_back: ";
    for (int it : v)
    {
        cout << it << " ";
    }

    cout << endl;
    cout<<"access index 2: "<<v[2]<<endl;
    cout<<"access index 2 using v.at():"<<v.at(3);
    cout << endl;

    //v.front(), v.back()
    cout<<"v.front(): "<<v.front()<<endl;
    cout<<"v.back(): "<<v.back()<<endl;


    /* v.begin(),v.end() ekta iteretor eita print 
    korte de-refrence operator use kora hoy */
    cout<<"v.begin() : "<<*(v.begin())<<endl;
   /* end ekdom last element ar porar box point 
   ekore tai garbage value print kore */
    cout<<"v.end() : "<<*(v.end()-1)<<endl;

    //if true result is 1 else result is 0
    cout<<"is empty= "<<v.empty()<<endl;

    //insert(position,value)
    v.insert(v.begin()+2,100);
    cout<<"insert() : ";
    for(int n:v){
        cout<<n<<" ";
    }
    
    cout<<endl;
    vector<int> vec = {1, 2, 3, 4, 5};
    
    // Declaring a forward iterator
    vector<int>::iterator it1; /* ei line na likhe for loop ar 
    samne auto dile e hoy eta advance cpp ar subidha */
    cout<<"interator: ";
    // Looping from begin to end
    for(it1 = vec.begin(); it1 != vec.end(); it1++) {
        cout << *(it1) << " ";
    }

    cout<<endl<<"reverse interator: ";
    vector<int>::reverse_iterator it2;
    for(it2 = vec.rbegin(); it2 != vec.rend(); it2++){
          cout<<*(it2)<<" ";
    }


    cout<<endl<<endl<<endl;
}