#include<iostream>
#include<string>
using namespace std;

int main(){
    string  name;
    double math,science,english; // Variables to store marks for 3 subjects (Math, Science, English)
    double total,average; // Variables to store total and average marks for the student

    cout<<"\nEnter your name: "; // Prompt the user to enter their name
    getline(cin,name); // Read the entire line for the name, allowing spaces

    cout<<"Enter your marks in Math: "; // Prompt the user to enter marks for Math
    cin>>math;

    cout<<"Enter your marks in Science: "; // Prompt the user to enter marks for Science
    cin>>science;

    cout<<"Enter your marks in English: "; // Prompt the user to enter marks for English
    cin>>english;
 
    total = math + science + english; // Calculate total marks
    average = total / 3; // Calculate average marks

    cout<<"\n -----------------------------------"<<endl; // Display a separator line for better readability
    cout<<"Student Name: " << name << endl; // Display the name of the student
    cout<<"Math Marks: " << math << endl; // Display the Math marks for the student
    cout<<"Science Marks: " << science << endl; // Display the Science marks for the student
    cout<<"English Marks: " << english << endl; // Display the English marks for the student
    cout<<"Total Marks: " << total << endl; // Display the total marks for the student
    cout<<"Average Marks: " << average << endl; // Display the average marks for the student

    return 0;
}