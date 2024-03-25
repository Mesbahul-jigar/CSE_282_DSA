// Write a C++ program to store roll no. (starting from 1), name and age of
// 5 students and then print the details of the student with roll no. 2

#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNumber;
    string name;
    int age;
};

int main() {
    const int numStudents = 5;
    Student students[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        students[i].rollNumber = i + 1;

        cout << "Enter Name for Student " << students[i].rollNumber << ": ";
        getline(cin, students[i].name);

        cout << "Enter Age for Student " << students[i].rollNumber << ": ";
        cin >> students[i].age;

        cin.ignore(); // To clear the newline character from the input buffer
        cout << endl;
    }

    cout << "Details of Student with Roll Number 2:\n";
    for (int i = 0; i < numStudents; ++i) {
        if (students[i].rollNumber == 2) {
            cout << "Roll Number: " << students[i].rollNumber << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            break;
        }
    }

    return 0;
}
