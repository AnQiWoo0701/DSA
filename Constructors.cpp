/*#include<iostream>
#include<string>
using namespace std;

class Employee{
    public:
        string name;
        string company;
        int Age;

        void introduceYourself(){
            cout<<"\nName: "<<name<<endl;
            cout<<"Company: "<<company<<endl;
            cout<<"Age: "<<Age<<endl;
        }

        Employee(string empName, string empCompany, int empAge){ // Constructor
            name = empName;
            company = empCompany;
            Age = empAge;
        }
};

int main(){
    Employee employee1("Jivindra", "Quest international University", 42);
    Employee employee2("Ammar", "AIMST University", 39);

    employee1.introduceYourself();
    employee2.introduceYourself();

    return 0;
}*/

// if there is employees and student class inside a code
//write using constructor to create the object of the class and display the information of the employees and students.
/*#include<iostream>
#include<string>
using namespace std;

class Employee{
    public:
        string name;
        string company;
        int Age;

        void introduceYourself(){
            cout<<"\nName: "<<name<<endl;
            cout<<"Company: "<<company<<endl;
            cout<<"Age: "<<Age<<endl;
        }

        Employee(string empName, string empCompany, int empAge){ // Constructor
            name = empName;
            company = empCompany;
            Age = empAge;
        }
};

class Student{
    public:
        int student_id;
        string name;
        int age;
        string course;

        void displayStudentInfo(){
            cout<<"\nStudent ID: "<<student_id<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Course: "<<course<<endl;
        }

        Student(int id, string studentName, int studentAge, string studentCourse){ // Constructor
            student_id = id;
            name = studentName;
            age = studentAge;
            course = studentCourse;
        }
};

int main(){// Create employee and student objects using constructors(hard coded)
    Employee employee1("Jivindra", "Quest international University", 42);
    Employee employee2("Ammar", "AIMST University", 39);

    employee1.introduceYourself();
    employee2.introduceYourself();

    Student student1(1, "Alice", 20, "Computer Science");
    Student student2(2, "Bob", 22, "Mechanical Engineering");

    student1.displayStudentInfo();
    student2.displayStudentInfo();

    return 0;
}*/

// if there is employees and student class inside a code
//write using constructor to create the object of the class and display the information of the employees and students.
//no hard coded, user input for the employee and student information.
#include<iostream>
#include<string>
using namespace std;

class Employee{
    public:
        string name;
        string company;
        int Age;

        void introduceYourself(){
            cout<<"\nName: "<<name<<endl;
            cout<<"Company: "<<company<<endl;
            cout<<"Age: "<<Age<<endl;
        }

        Employee(string empName, string empCompany, int empAge){ // Constructor
            name = empName;
            company = empCompany;
            Age = empAge;
        }
};

class Student{
    public:
        int student_id;
        string name;
        int age;
        string course;

        void displayStudentInfo(){
            cout<<"\nStudent ID: "<<student_id<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Course: "<<course<<endl;
        }

        Student(int id, string studentName, int studentAge, string studentCourse){ // Constructor
            student_id = id;
            name = studentName;
            age = studentAge;
            course = studentCourse;
        }
};

int main(){
    // Input data for employee
    string empName, empCompany;
    int empAge;

    cout<<"Enter Employee Name: ";
    getline(cin, empName);
    cout<<"Enter Employee Company: ";
    getline(cin, empCompany);
    cout<<"Enter Employee Age: ";
    cin>>empAge;
    cin.ignore(); // To ignore the newline character after entering age

    Employee employee(empName, empCompany, empAge);
    employee.introduceYourself();

    // Input data for student
    int studentId, studentAge;
    string studentName, studentCourse;

    cout<<"\nEnter Student ID: ";
    cin>>studentId;
    cin.ignore(); // To ignore the newline character after entering student ID
    cout<<"Enter Student Name: ";
    getline(cin, studentName);
    cout<<"Enter Student Age: ";
    cin>>studentAge;
    cin.ignore(); // To ignore the newline character after entering age
    cout<<"Enter Student Course: ";
    getline(cin, studentCourse);

    Student student(studentId, studentName, studentAge, studentCourse);
    student.displayStudentInfo();

    return 0;
}