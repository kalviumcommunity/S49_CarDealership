#include "Phone.cpp"  
#include "Customer.cpp" 

void Customer::purchase(Phone &phone) {
    cout << name << " is buying: ";
    phone.display();
}

int main() {
    // Create objects
    Phone phone("iPhone 14", 999.99);
    Customer customer("Alice");

    // Use member functions
    customer.greet();
    phone.applyDiscount(10);
    customer.purchase(phone);

    return 0;
}
