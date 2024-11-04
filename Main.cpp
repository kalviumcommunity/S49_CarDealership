#include <iostream>
#include <string>
using namespace std;

#include "Customer.cpp"  // Include the Customer class

int main() {
    cout << "Total Phones: " << Phone::getTotalPhones() << endl;

    // Demonstrating runtime polymorphism with abstract class and virtual function
    Customer customer1("C001", "Alice", new Smartphone("Galaxy S21", 799.99, "Android"));
    customer1.displayCustomerDetails();  // Calls Smartphone's display

    Customer customer2("C002", "Bob", new BasicPhone("Nokia 3310", 49.99));
    customer2.displayCustomerDetails();  // Calls BasicPhone's display

    cout << "Total Phones: " << Phone::getTotalPhones() << endl;

    return 0;
}
