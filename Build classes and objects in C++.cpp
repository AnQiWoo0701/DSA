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
};

int main(){
    Employee employee1;
    employee1.name = "Jivindra";
    employee1.company = "Quest international University";
    employee1.Age = 42;

    Employee employee2;
    employee2.name = "Ammar";
    employee2.company = "AIMST University";
    employee2.Age = 39;

    employee1.introduceYourself();
    employee2.introduceYourself();

    

    return 0;
}