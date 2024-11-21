#include <iostream>
#include <string>
using namespace std;

// Base class: Phone
class Phone {
protected:
    string model;
    double price;

public:
    Phone(string m, double p) : model(m), price(p) {}
    virtual ~Phone() {}

    // Abstract function for displaying phone details
    virtual void display() const = 0;
};

// Derived class: Smartphone
class Smartphone : public Phone {
private:
    string operatingSystem;

public:
    Smartphone(string m, double p, string os) : Phone(m, p), operatingSystem(os) {}
    void display() const override {
        cout << "Smartphone - Model: " << model << ", Price: $" << price 
             << ", OS: " << operatingSystem << endl;
    }
};

// Derived class: BasicPhone
class BasicPhone : public Phone {
public:
    BasicPhone(string m, double p) : Phone(m, p) {}
    void display() const override {
        cout << "Basic Phone - Model: " << model << ", Price: $" << price << endl;
    }
};

// New derived class: FeaturePhone
class FeaturePhone : public Phone {
private:
    bool supportsCamera;

public:
    FeaturePhone(string m, double p, bool camera) : Phone(m, p), supportsCamera(camera) {}
    void display() const override {
        cout << "Feature Phone - Model: " << model << ", Price: $" << price 
             << ", Camera: " << (supportsCamera ? "Yes" : "No") << endl;
    }
};
