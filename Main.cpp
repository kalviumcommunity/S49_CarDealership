#include "Customer.cpp"

int main() {
    // Create customers with different types of phones
    Customer customer1("C001", "Alice", new Smartphone("Galaxy S21", 799.99, "Android"));
    Customer customer2("C002", "Bob", new BasicPhone("Nokia 3310", 49.99));
    Customer customer3("C003", "Charlie", new FeaturePhone("Moto G", 199.99, true));

    // Display details for each customer
    customer1.displayCustomerDetails();
    customer2.displayCustomerDetails();
    customer3.displayCustomerDetails();

    return 0;
}
