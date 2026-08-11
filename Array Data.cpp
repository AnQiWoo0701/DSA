#include<iostream>
#include <string>
using namespace std;

int main(){
    string name[3]; // Array to store names of 3 students
    double marks[3][3]; // 2D array to store marks for 3 subjects (Math, Science, English) for each student
    double total, average; // Variables to store total and average marks for each student
    string subjects[3] = {"Math", "Science", "English"}; // Array to store the names of the subjects

    for(int i = 0; i < 3; i++){
        cout << "\nEnter your name: "; // Prompt the user to enter their name
        getline(cin, name[i]); // Read the entire line for the name, allowing spaces

        for(int j = 0; j < 3; j++){ // Loop through the subjects to get marks for each
            cout << "Enter your marks in " << subjects[j] << ": "; // Prompt the user to enter marks for the current subject
            cin >> marks[i][j]; // Read the marks for the current subject
        }
        cin.ignore(); // To ignore the newline character after entering marks
    }

    for(int i = 0; i < 3; i++){ // Loop through each student to calculate and display their total and average marks
        total = marks[i][0] + marks[i][1] + marks[i][2]; // Calculate total marks for the current student
        average = total / 3; // Calculate average marks for the current student

        cout << "\n -----------------------------------" << endl; // Display a separator line for better readability
        cout << "Student Name: " << name[i] << endl; // Display the name of the current student
        cout << "Math Marks: " << marks[i][0] << endl; // Display the Math marks for the current student
        cout << "Science Marks: " << marks[i][1] << endl; // Display the Science marks for the current student
        cout << "English Marks: " << marks[i][2] << endl; // Display the English marks for the current student
        cout << "Total Marks: " << total << endl; // Display the total marks for the current student
        cout << "Average Marks: " << average << endl; // Display the average marks for the current student
    }

}
