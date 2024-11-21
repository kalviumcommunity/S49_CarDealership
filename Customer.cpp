#include <iostream>
#include <string>
#include "Phone.cpp"
using namespace std;

// Customer class
class Customer {
private:
    string customerID;
    string name;
    Phone* ownedPhone;  // Base class pointer to enable polymorphism

public:
    Customer(string id, string n, Phone* phone) : customerID(id), name(n), ownedPhone(phone) {}
    ~Customer() {
        delete ownedPhone;  // Clean up dynamically allocated memory
    }

    void displayCustomerDetails() const {
        cout << "Customer ID: " << customerID << ", Name: " << name << endl;
        cout << "Owned Phone Details:" << endl;
        ownedPhone->display();  // Runtime polymorphism
    }
};
