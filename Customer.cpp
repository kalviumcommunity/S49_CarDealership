#include <iostream>
#include <string>
#include "Phone.cpp"
using namespace std;

class Customer {
private:
    string name;

public:
    // Static variable to track total customers
    static int totalCustomers;

    // Default constructor
    Customer() : name("Unknown") {
        totalCustomers++;
        cout << "Default constructor called for Customer" << endl;
    }

    // Parameterized constructor
    Customer(string n) : name(n) {
        totalCustomers++;
        cout << "Parameterized constructor called for Customer" << endl;
    }

    // Destructor
    ~Customer() {
        totalCustomers--;
        cout << "Destructor called for Customer: " << name << endl;
    }

    // Member function to greet the customer
    void greet() const {
        cout << "Hello, " << name << "! Welcome to the store." << endl;
    }

    // Member function for purchase
    void purchase(Phone& phone) const {
        cout << name << " is buying: ";
        phone.display();
    }

    // Static member function to get total number of customers
    static int getTotalCustomers() {
        return totalCustomers;
    }
};

// Initialize static variable
int Customer::totalCustomers = 0;
