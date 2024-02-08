#include <iostream>
#include <string>

using namespace std;

// Define a structure to represent student marks
struct Marks {
    int rollNumber;
    string name;
    int chemMarks;
    int mathsMarks;
    int phyMarks;
};

int main() {
    const int numStudents = 5;
    Marks students[numStudents];

    // Input marks for 5 students
    for (int i = 0; i < numStudents; ++i) {
        students[i].rollNumber = i + 1;

        cout << "Enter Name for Student " << students[i].rollNumber << ": ";
        getline(cin, students[i].name);

        cout << "Enter Chemistry Marks (out of 100) for Student " << students[i].rollNumber << ": ";
        cin >> students[i].chemMarks;

        cout << "Enter Mathematics Marks (out of 100) for Student " << students[i].rollNumber << ": ";
        cin >> students[i].mathsMarks;

        cout << "Enter Physics Marks (out of 100) for Student " << students[i].rollNumber << ": ";
        cin >> students[i].phyMarks;

        cin.ignore(); // To clear the newline character from the input buffer
        cout << endl;
    }

    // Display the details and percentage for each student
    for (int i = 0; i < numStudents; ++i) {
        cout << "\nDetails for Student " << students[i].rollNumber << ":\n";
        cout << "Name: " << students[i].name << endl;
        cout << "Chemistry Marks: " << students[i].chemMarks << endl;
        cout << "Mathematics Marks: " << students[i].mathsMarks << endl;
        cout << "Physics Marks: " << students[i].phyMarks << endl;

        // Calculate and display the percentage for each student
        float totalMarks = students[i].chemMarks + students[i].mathsMarks + students[i].phyMarks;
        float percentage = (totalMarks / 300.0) * 100.0;
        cout << "Percentage: " << percentage << "%" << endl;
    }

    return 0;
}
