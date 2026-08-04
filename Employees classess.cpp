//Create a class . The name of the class is employees. 
//Wanted to build 3 employees which is employee 1,2 and 3 and follow by the variable staff id,name and department.

#include<iostream>
#include<string>
using namespace std;

class Employees{
    public:
        int staff_id;
        string name;
        string department;

        void displayEmployeeInfo(){
            cout<<"\nStaff ID: "<<staff_id<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Department: "<<department<<endl;
        }
};

int main(){ // Create 3 employee objects (hard coded)
    Employees employee1;
    employee1.staff_id = 101;
    employee1.name = "John Doe";
    employee1.department = "Human Resources";
    employee1.displayEmployeeInfo();

    Employees employee2;
    employee2.staff_id = 102;
    employee2.name = "Jane Smith";
    employee2.department = "Finance";
    employee2.displayEmployeeInfo();

    Employees employee3;
    employee3.staff_id = 103;
    employee3.name = "Alice Johnson";
    employee3.department = "IT";
    employee3.displayEmployeeInfo();
}


//Create a class . The name of the class is employees. 
//Wanted to build 3 employees which is employee 1,2 and 3 and follow by the variable staff id,name and department.
//using array to display 5 of the employees information.

/*#include<iostream>
#include<string>    
using namespace std;

int main(){
    class Employees{
        public:
            int staff_id;
            string name;
            string department;

            void displayEmployeeInfo(){
                cout<<"Staff ID: "<<staff_id<<endl;
                cout<<"Name: "<<name<<endl;
                cout<<"Department: "<<department<<endl;
            }
    };

    Employees employees[5]; // Array of 5 employees

    // Input data for each employee
    for(int i = 0; i < 5; i++){
        cout<<"Enter details for Employee "<<i+1<<":"<<endl;
        cout<<"Staff ID: ";
        cin>>employees[i].staff_id;
        cin.ignore(); // To ignore the newline character after entering staff_id
        cout<<"Name: ";
        getline(cin, employees[i].name);
        cout<<"Department: ";
        getline(cin, employees[i].department);
        cout<<endl;
    }

    // Display data for each employee
    for(int i = 0; i < 5; i++){
        cout<<"Details of Employee "<<i+1<<":"<<endl;
        employees[i].displayEmployeeInfo();
        cout<<endl;
    }

    return 0;
}*/