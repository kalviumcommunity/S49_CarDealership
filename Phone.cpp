#include <iostream>
#include <string>
using namespace std;

class Phone {
private:
    string model;
    double price;
    static int totalPhones;  // Static variable to track total number of phones

public:
    Phone() : model("Unknown"), price(0.0) {
        totalPhones++;  // Increment count when a Phone object is created
    }

    Phone(string m, double p) : model(m), price(p) {
        totalPhones++;  // Increment count when a Phone object is created
    }

    ~Phone() {
        totalPhones--;  // Decrement count when a Phone object is destroyed
    }

    static int getTotalPhones() {  // Static method to get total phones
        return totalPhones;
    }

    void display() {
        cout << "Model: " << model << ", Price: $" << price << endl;
    }

    void applyDiscount(double percent) {
        price -= price * (percent / 100);
    }
};

// Initialize the static variable
int Phone::totalPhones = 0;
