#include <iostream>
#include <string>
using namespace std;

#include "Customer.cpp"

int main() {
    cout << "Total Phones: " << Phone::getTotalPhones() << endl;

    Customer customer1("C001", "Alice", new Smartphone("Galaxy S21", 799.99, "Android"));
    customer1.displayCustomerDetails();

    Customer customer2("C002", "Bob", new BasicPhone("Nokia 3310", 49.99));
    customer2.displayCustomerDetails();

    cout << "Total Phones: " << Phone::getTotalPhones() << endl;

    return 0;
}
