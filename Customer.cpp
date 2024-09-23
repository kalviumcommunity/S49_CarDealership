#include <iostream>
#include <string>
using namespace std;

// Forward declaration of Phone class
class Phone;

class Customer {
private:
    string name;

public:
    Customer(string n) : name(n) {}

    void greet() {
        cout << "Hello, " << name << "! Welcome to the store." << endl;
    }

    void purchase(Phone& phone);
};

// Implement the purchase function, which uses the Phone class
void Customer::purchase(Phone& phone) {
    cout << name << " is buying: ";
    phone.display();
}
