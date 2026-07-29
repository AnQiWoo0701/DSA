#include<iostream>
#include <string>
using namespace std;

int main(){
    string name[3];
    double marks[3][3];
    double total, average;
    string subjects[3] = {"Math", "Science", "English"};

    for(int i = 0; i < 3; i++){
        cout << "Enter your name: ";
        getline(cin, name[i]);

        for(int j = 0; j < 3; j++){
            cout << "Enter your marks in " << subjects[j] << ": ";
            cin >> marks[i][j];
        }
        cin.ignore(); // To ignore the newline character after entering marks
    }

    for(int i = 0; i < 3; i++){
        total = marks[i][0] + marks[i][1] + marks[i][2];
        average = total / 3;

        cout << "\n -----------------------------------" << endl;
        cout << "Student Name: " << name[i] << endl;
        cout << "Math Marks: " << marks[i][0] << endl;
        cout << "Science Marks: " << marks[i][1] << endl;
        cout << "English Marks: " << marks[i][2] << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
    }

}