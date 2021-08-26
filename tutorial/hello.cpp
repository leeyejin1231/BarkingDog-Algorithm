#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";  // food variable
    string &meal = food;    // reference to food

    cout << food <<endl;
    cout << meal << endl;
    cout << &food << endl;
    cout << &meal;
    
    return 0;
}       
