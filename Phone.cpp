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
        cout << "Default constructor called for Phone" << endl;
    }

    // Parameterized constructor
    Phone(string m, double p) : model(m), price(p) {
        totalPhones++;
        cout << "Parameterized constructor called for Phone" << endl;
    }

    // Destructor
    ~Phone() {
        totalPhones--;
        cout << "Destructor called for Phone: " << model << endl;
    }

    // Function to display phone details
    void display() const {
        cout << "Model: " << model << ", Price: $" << price << endl;
    }

    // Static member function
    static int getTotalPhones() {
        return totalPhones;
    }

    // Accessor methods
    string getModel() const {
        return model;
    }

    double getPrice() const {
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
