#include <iostream>
#include "Phone.cpp"
#include "Customer.cpp"
using namespace std;

int main() {
    // Dynamic allocation of Phone objects
    int numPhones;
    cout << "Enter number of phone models: ";
    cin >> numPhones;

    // Create an array of Phone objects
    Phone* phones = new Phone[numPhones];

    // Initialize phone objects based on user input
    for (int i = 0; i < numPhones; ++i) {
        string model;
        double price;
        cout << "Enter model and price for phone " << (i + 1) << ": ";
        cin >> model >> price;
        phones[i] = Phone(model, price); // Initialize phone
    }

    // Create a Customer object
    string customerName;
    cout << "Enter customer name: ";
    cin >> customerName;
    Customer customer(customerName);

    // Greet the customer
    customer.greet();

    // Display details of all phones in the array
    cout << "\nAvailable phones in the store:\n";
    for (int i = 0; i < numPhones; ++i) {
        phones[i].display(); // Display each phone
    }

    // Customer purchases the first phone
    cout << "\n";
    customer.purchase(phones[0]);

    // Apply a discount to all phones in the array
    cout << "\nApplying a 10% discount on all phones:\n";
    for (int i = 0; i < numPhones; ++i) {
        phones[i].applyDiscount(10);
        phones[i].display();
    }

    // Deallocate memory
    delete[] phones;

    return 0;
}
