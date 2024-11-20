#include <iostream>
#include <string>
using namespace std;

class Phone {
private:
    string model;
    double price;

public:
    Phone(string m, double p) : model(m), price(p) {}

    void displayPhoneDetails() const {
        cout << "Model: " << model << ", Price: $" << price << endl;
    }
};
