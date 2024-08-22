#include <iostream>
#include <string>
using namespace std;

class Phone {
private:
    string model;
    double price;

public:
    Phone(string m, double p) : model(m), price(p) {}

    void display() {
        cout << "Model: " << model << ", Price: " << price << endl;
    }

    void applyDiscount(double percent) {
        price -= price * (percent / 100);
    }
};
