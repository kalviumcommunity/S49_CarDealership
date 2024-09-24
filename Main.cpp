#include <iostream>
#include "Customer.cpp"
using namespace std;

int main() {
    // Dynamic allocation of Phone objects
    int numPhones;
    cout << "Enter number of phone models: ";
    cin >> numPhones;

    // Dynamically allocate an array of pointers to Phone
    Phone** phones = new Phone*[numPhones];

    // Initialize phone objects based on user input
    for (int i = 0; i < numPhones; ++i) {
        string model;
        double price;
        cout << "Enter model and price for phone " << (i + 1) << ": ";
        cin >> model >> price;
        phones[i] = new Phone(model, price);  // Dynamically allocate each Phone object
    }

    // Create a Customer object dynamically
    string customerName;
    cout << "Enter customer name: ";
    cin >> customerName;
    Customer* customer = new Customer(customerName);

    // Greet the customer
    customer->greet();

    // Display total phones and customers
    cout << "\nTotal phones available: " << Phone::getTotalPhones() << endl;
    cout << "Total customers so far: " << Customer::getTotalCustomers() << endl;

    // Display details of all phones in the array
    cout << "\nAvailable phones in the store:\n";
    for (int i = 0; i < numPhones; ++i) {
        phones[i]->display();  // Access through pointer
    }

    // Customer purchases the first phone
    customer->purchase(*phones[0]);

    // Apply a discount to all phones in the array
    cout << "\nApplying a 10% discount on all phones:\n";
    for (int i = 0; i < numPhones; ++i) {
        phones[i]->applyDiscount(10);
        phones[i]->display();
    }

    // Deallocate memory
    for (int i = 0; i < numPhones; ++i) {
        delete phones[i];  // Delete each dynamically allocated phone
    }
    delete[] phones;  // Delete the array of pointers
    delete customer;  // Delete customer object

    return 0;
}
