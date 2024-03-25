//  Write a C++ program to add two distances in inch-feet using structure.

#include <iostream>
using namespace std;

struct Distance {
    int feet;
    int inches;
};

Distance addDistances(const Distance& d1, const Distance& d2) {
    Distance result;
    result.inches = d1.inches + d2.inches;

    if (result.inches >= 12) {
        result.feet = d1.feet + d2.feet + result.inches / 12;
        result.inches %= 12;
    } else {
        result.feet = d1.feet + d2.feet;
    }

    return result;
}

void displayDistance(const Distance& d, const string& label) {
    cout << label << ": " << d.feet << " feet " << d.inches << " inches" << endl;
}

int main() {
    Distance dis1, dis2;

    cout << "Enter the first distance:" << endl;
    cout << "Feet: ";
    cin >> dis1.feet;
    cout << "Inches: ";
    cin >> dis1.inches;

    cout << "\nEnter the second distance:" << endl;
    cout << "Feet: ";
    cin >> dis2.feet;
    cout << "Inches: ";
    cin >> dis2.inches;

    Distance sum = addDistances(dis1, dis2);

    displayDistance(dis1, "First Distance");
    displayDistance(dis2, "Second Distance");
    displayDistance(sum, "Sum");

    return 0;
}
