#include "Customer.cpp" 

int main() {
    Customer customer1("C001", "Alice");
    Phone phone1("iPhone 13", 999.99);

    cout << "Customer Details:" << endl;
    customer1.displayCustomerDetails();

    cout << "Phone Details:" << endl;
    phone1.displayPhoneDetails();

    return 0;
}
