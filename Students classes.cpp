//The name of the class is student. Wanted to build 3 students which student 1,2 and 3 and follow by the variable student id,name,age and course.

#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
        int student_id;
        string name;
        int age;
        string course;

        void displayStudentInfo(){
            cout<<"Student ID: "<<student_id<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Course: "<<course<<endl;
        }
};

int main(){
    Student students[3]; // Array of 3 students

    // Input data for each student
    for(int i = 0; i < 3; i++){
        cout<<"Enter details for Student "<<i+1<<":"<<endl;
        cout<<"Student ID: ";
        cin>>students[i].student_id;
        cin.ignore(); // To ignore the newline character after entering student_id
        cout<<"Name: ";
        getline(cin, students[i].name);
        cout<<"Age: ";
        cin>>students[i].age;
        cin.ignore(); // To ignore the newline character after entering age
        cout<<"Course: ";
        getline(cin, students[i].course);
        cout<<endl;
    }

    // Display data for each student
    for(int i = 0; i < 3; i++){
        cout<<"--------Details of Student"<<i+1<<"--------"<<endl;
        students[i].displayStudentInfo();
        cout<<endl;
    }

    return 0;
}