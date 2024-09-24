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

    // Constructor
    Customer(string n) : name(n) {
        totalCustomers++;  // Increment the static totalCustomers variable
    }

    // Destructor
    ~Customer() {
        totalCustomers--;  // Decrement the static totalCustomers variable
    }

    // Member function to greet the customer
    void greet() {
        cout << "Hello, " << name << "! Welcome to the store." << endl;
    }

    // Function to make a purchase
    void purchase(Phone& phone) {
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
