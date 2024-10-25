// main.cpp
#include <iostream>
#include "Phone.cpp"    // Include Phone definitions
#include "Customer.cpp" // Include Customer definitions
using namespace std;

int main() {
    const int numPhones = 3;
    Phone* phones[numPhones];

    // Create instances of Smartphone and BasicPhone
    phones[0] = new Smartphone("Galaxy S21", 799.99, "Android");
    phones[1] = new BasicPhone("Nokia 3310", 49.99);
    phones[2] = new Smartphone("iPhone 13", 999.99, "iOS");

    // Create a customer
    Customer customer("Adithi");

    // Greet the customer
    customer.greet();

    // Display details of all phones
    cout << "\nAvailable phones in the store:\n";
    for (int i = 0; i < numPhones; ++i) {
        phones[i]->display();  // Call the display function polymorphically
    }

    // Display total number of phones
    cout << "\nTotal phones created: " << Phone::getTotalPhones() << endl;

    // Deallocate memory
    for (int i = 0; i < numPhones; ++i) {
        delete phones[i];  // Delete each dynamically allocated phone
    }

    return 0;
}
