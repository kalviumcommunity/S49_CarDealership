#include "Phone.cpp"
#include "Customer.cpp"

int main() {
    // Create an array of Phone objects
    Phone phones[] = {
        Phone("iPhone 14", 999.99),
        Phone("Samsung Galaxy S22", 799.99),
        Phone("Google Pixel 7", 599.99)
    };

    // Create a Customer object
    Customer customer("Alice");

    // Greet the customer
    customer.greet();

    // Display details of all phones in the array
    cout << "Available phones in the store:\n";
    for (int i = 0; i < 3; ++i) {
        phones[i].display();
    }

    // Customer purchases the first phone
    cout << "\n";
    customer.purchase(phones[0]);

    // Apply a discount to all phones in the array
    cout << "\nApplying a 10% discount on all phones:\n";
    for (int i = 0; i < 3; ++i) {
        phones[i].applyDiscount(10);
        phones[i].display();
    }





    //sdfghj

    return 0;
}
