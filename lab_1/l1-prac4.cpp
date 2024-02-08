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
    Distance distance1, distance2;

    cout << "Enter the first distance:" << endl;
    cout << "Feet: ";
    cin >> distance1.feet;
    cout << "Inches: ";
    cin >> distance1.inches;

    cout << "\nEnter the second distance:" << endl;
    cout << "Feet: ";
    cin >> distance2.feet;
    cout << "Inches: ";
    cin >> distance2.inches;


    Distance sum = addDistances(distance1, distance2);


    displayDistance(distance1, "First Distance");
    displayDistance(distance2, "Second Distance");
    displayDistance(sum, "Sum");

    return 0;
}
