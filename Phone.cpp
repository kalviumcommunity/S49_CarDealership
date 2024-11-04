#include <iostream>
#include <string>
using namespace std;

class Phone {
protected:
    string model;
    double price;

public:
    static int totalPhones;

    Phone() : model("Unknown"), price(0.0) {
        totalPhones++;
        cout << "Default constructor called for Phone" << endl;
    }

    Phone(string m, double p) : model(m), price(p) {
        totalPhones++;
        cout << "Parameterized constructor called for Phone" << endl;
    }

    virtual ~Phone() {
        totalPhones--;
        cout << "Destructor called for Phone: " << model << endl;
    }

    // Pure virtual function: makes Phone an abstract class
    virtual void display() const = 0;

    static int getTotalPhones() {
        return totalPhones;
    }
};

int Phone::totalPhones = 0;

class Smartphone : public Phone {
private:
    string operatingSystem;

public:
    Smartphone(string m, double p, string os) : Phone(m, p), operatingSystem(os) {
        cout << "Smartphone constructor called for " << model << endl;
    }

    void display() const override {
        cout << "Model: " << model << ", Price: $" << price << ", OS: " << operatingSystem << endl;
    }
};

class BasicPhone : public Phone {
public:
    BasicPhone(string m, double p) : Phone(m, p) {
        cout << "BasicPhone constructor called for " << model << endl;
    }

    void display() const override {
        cout << "Model: " << model << ", Price: $" << price << " (Basic Phone, no OS)" << endl;
    }
};
