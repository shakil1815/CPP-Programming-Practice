#include <iostream>
#include <string>
using namespace std;
 
int main () {
  // Creating auto variables
  auto myNum = 5;            // int
  auto myFloatNum = 5.99f;   // float
  auto myDoubleNum = 9.98;   // double
  auto myLetter = 'D';       // char
  auto myBoolean = true;     // bool
  auto myString = string("Hello"); // std::string
     
  // Print variable values
  cout << "int: " << myNum << "\n";
  cout << "float: " << myFloatNum << "\n";
  cout << "double: " << myDoubleNum << "\n";
  cout << "char: " << myLetter << "\n";
  cout << "bool: " << myBoolean << "\n";
  cout << "string: " << myString << "\n";
 
  return 0;
}

/*
The auto keyword automatically detects the type of
a variable based on the value you assign to it
auto only works when you assign a value at the same
time (You can't declare auto x; without assigning a value)
*/