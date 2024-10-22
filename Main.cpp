#include <iostream>
#include "Customer.cpp"
#include "Phone.cpp"
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

        // Create a Phone object using the parameterized constructor
        phones[i] = new Phone(model, price);
    }

    // Create a Customer object dynamically using parameterized constructor
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

    // Deallocate memory
    for (int i = 0; i < numPhones; ++i) {
        delete phones[i];  // Delete each dynamically allocated phone
    }
    delete[] phones;  // Delete the array of pointers
    delete customer;  // Delete customer object

    return 0;
}
