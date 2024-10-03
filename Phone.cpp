#include <iostream>
#include <string>
using namespace std;

class Phone {
private:
    string model;
    double price;
public:
    static int totalPhones;

    // Default constructor
    Phone() : model("Unknown"), price(0.0) {
        totalPhones++;
    }

    // Parameterized constructor
    Phone(string m, double p) : model(m), price(p) {
        totalPhones++;
    }

    // Destructor
    ~Phone() {
        totalPhones--;
    }

    // Function to display phone details
    void display() {
        cout << "Model: " << model << ", Price: $" << price << endl;
    }

    // Static member function
    static int getTotalPhones() {
        return totalPhones;
    }

    // Function to apply a discount
    void applyDiscount(double percentage) {
        price -= price * (percentage / 100);
    }

    // Accessor methods
    string getModel() {
        return model;
    }

    double getPrice() {
        return price;
    }

    // Mutator methods
    void setModel(const string& m) {
        model = m;
    }

    void setPrice(double p) {
        price = p;
    }
};

// Initialize static variable
int Phone::totalPhones = 0;
