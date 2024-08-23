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
        cout << "Model: " << this->model << ", Price: $" << this->price << endl;
    }

    void applyDiscount(double percent) {
        this->price -= this->price * (percent / 100);
        cout << "Discount applied. New price: $" << this->price << endl;
    }
};
