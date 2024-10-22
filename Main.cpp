// main.cpp


#include <iostream>
#include <string>
#include "Phone.cpp"
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

        // Create a Phone object using the parameterized constructor
        phones[i] = new Phone(model, price);
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

    // Use accessors to display specific details
    cout << "\nUsing accessors to display phone details:\n";
    for (int i = 0; i < numPhones; ++i) {
        cout << "Phone " << (i + 1) << ": Model = " << phones[i]->getModel()
             << ", Price = $" << phones[i]->getPrice() << endl;
    }

    // Use mutators to change a phone's model and price
    string newModel;
    double newPrice;
    cout << "\nEnter new model and price for the first phone: ";
    cin >> newModel >> newPrice;

    phones[0]->setModel(newModel);
    phones[0]->setPrice(newPrice);

    cout << "Updated details for the first phone:\n";
    phones[0]->display();

    // Deallocate memory
    for (int i = 0; i < numPhones; ++i) {
        delete phones[i];  
    }
    delete[] phones;  
    delete customer;  

    return 0;
}
