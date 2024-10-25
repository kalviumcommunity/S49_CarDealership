// Customer.cpp
#include <iostream>
#include <string>
using namespace std;

class Customer {
private:
    string name;

public:
    Customer(string customerName) : name(customerName) {
        cout << "Customer created: " << name << endl;
    }

    void greet() const {
        cout << "Hello, " << name << "! Welcome to the store." << endl;
    }

    string getName() const {
        return name;
    }
};
