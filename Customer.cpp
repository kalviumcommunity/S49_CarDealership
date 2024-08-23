#include <iostream>
#include <string>
using namespace std;

class Phone;  // Forward declaration

class Customer {
private:
    string name;

public:
    Customer(string n) : name(n) {}

    void greet() {
        cout << "Hello, " << this->name << "! Welcome to the store." << endl;
    }

    void purchase(Phone &phone) {
        cout << this->name << " is buying: ";
        phone.display();
    }
};
