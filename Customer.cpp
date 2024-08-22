#include <iostream>
#include <string>
using namespace std;

class Phone;  

class Customer {
private:
    string name;

public:
    Customer(string n) : name(n) {}

    void greet() {
        cout << "Hello, " << name << "! Welcome to the store." << endl;
    }

    void purchase(Phone &phone);  
};
