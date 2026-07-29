#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
        string name;
        double marks[3];
    public:
        void inputData(){
            cout<<"Enter Student Name: ";
            getline(cin,name);

            cout<<"Enter Math Marks: ";
            cin>>marks[0];

            cout<<"Enter Science Marks: ";
            cin>>marks[1];

            cout<<"Enter English Marks: ";
            cin>>marks[2];
        }

        double calculateTotal(){
            return marks[0] + marks[1] + marks[2];
        }

        double calculateAverage(){
            return calculateTotal() / 3;
        }

        void displayData(){
            cout<<"\n -----------------------------------"<<endl;
            cout<<"Student Name: " << name << endl;
            cout<<"Math Marks: " << marks[0] << endl;
            cout<<"Science Marks: " << marks[1] << endl;
            cout<<"English Marks: " << marks[2] << endl;
            cout<<"Total Marks: " << calculateTotal() << endl;
            cout<<"Average Marks: " << calculateAverage() << endl;
        }
};

int main(){
    Student s;
    s.inputData();
    s.displayData();

    return 0;
}