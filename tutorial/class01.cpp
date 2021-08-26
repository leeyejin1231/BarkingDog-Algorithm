#include <iostream>
using namespace std;

class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!" << endl;
    }
    void myMethod2();
};

void MyClass::myMethod2() {
  cout << "Bye World!" << endl;
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  myObj.myMethod2();
  return 0;
}