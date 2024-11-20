#include <iostream>
#include <string>
#include "Phone.cpp" 
using namespace std;

class Customer {
private:
    string customerID;
    string name;

public:
    Customer(string id, string n) : customerID(id), name(n) {}

    void displayCustomerDetails() const {
        cout << "Customer ID: " << customerID << ", Name: " << name << endl;
    }
};
