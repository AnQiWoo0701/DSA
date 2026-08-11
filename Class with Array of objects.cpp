#include <iostream>
#include <string>
#include <limits>

using namespace std;

class Student {
private:
    string name;
    double marks[3];   // Array to store marks for 3 subjects

public:
    // Function to input student details
    void inputDetails() {
        cout << "Enter student's name: ";
        getline(cin, name);

        cout << "Enter Math marks: ";
        cin >> marks[0];

        cout << "Enter Science marks: ";
        cin >> marks[1];

        cout << "Enter English marks: ";
        cin >> marks[2];

        // Clear input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Function to calculate total marks
    double calculateTotal() {
        return marks[0] + marks[1] + marks[2];
    }

    // Function to calculate average marks
    double calculateAverage() {
        return calculateTotal() / 3;
    }

    // Function to display student details
    void displayDetails() {
        cout << "\n========== Student Report ==========\n";
        cout << "Student Name : " << name << endl;
        cout << "Math Marks   : " << marks[0] << endl;
        cout << "Science Marks: " << marks[1] << endl;
        cout << "English Marks: " << marks[2] << endl;
        cout << "Total Marks  : " << calculateTotal() << endl;
        cout << "Average Marks: " << calculateAverage() << endl;
    }
};

int main() {
    Student classroom[3];  // Array of 3 Student objects

    for (int i = 0; i < 3; i++) {
        cout << "\n--- Student " << i + 1 << " ---" << endl;
        classroom[i].inputDetails();
    }

    cout <<"\n========== Class Report ==========\n";
    for (int i = 0; i < 3; i++) {
        classroom[i].displayDetails();
    }

    return 0;
}

