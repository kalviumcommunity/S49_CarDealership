#include "Phone.cpp"
#include "Customer.cpp"

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
