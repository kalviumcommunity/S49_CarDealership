// Phone.cpp
#include <iostream>
#include <string>
using namespace std;

class Phone {
protected:
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
    virtual ~Phone() {
        totalPhones--;
    }

    // Function to display phone details (virtual for polymorphism)
    virtual void display() const {
        cout << "Model: " << model << ", Price: $" << price << endl;
    }

    // Static member function
    static int getTotalPhones() {
        return totalPhones;
    }
};

// Initialize static variable
int Phone::totalPhones = 0;

// Derived class: Smartphone (Single Inheritance)
class Smartphone : public Phone {
private:
    string operatingSystem;

public:
    // Parameterized constructor for Smartphone
    Smartphone(string m, double p, string os) : Phone(m, p), operatingSystem(os) {
    }

    // Override the display function
    void display() const override {
        cout << "Model: " << model << ", Price: $" << price << ", OS: " << operatingSystem << endl;
    }
};

// Derived class: BasicPhone (Hierarchical Inheritance)
class BasicPhone : public Phone {
public:
    // Parameterized constructor for BasicPhone
    BasicPhone(string m, double p) : Phone(m, p) {
    }

    // Override the display function
    void display() const override {
        cout << "Model: " << model << ", Price: $" << price << " (Basic Phone, no OS)" << endl;
    }
};
