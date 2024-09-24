#include <iostream>
#include <string>
using namespace std;

// Forward declaration of Phone class
class Phone;

class Customer {
private:
    string name;
    static int totalCustomers;  // Static variable to track total number of customers

public:
    Customer(string n) : name(n) {
        totalCustomers++;  // Increment count when a Customer object is created
    }

    ~Customer() {
        totalCustomers--;  // Decrement count when a Customer object is destroyed
    }

    static int getTotalCustomers() {  // Static method to get total customers
        return totalCustomers;
    }

    void greet() {
        cout << "Hello, " << name << "! Welcome to the store." << endl;
    }

    void purchase(Phone& phone) {
        cout << name << " is buying: ";
        phone.display();
    }
};

// Initialize the static variable
int Customer::totalCustomers = 0;
