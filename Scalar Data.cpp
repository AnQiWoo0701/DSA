#include<iostream>
#include<string>
using namespace std;

int main(){
    string  name;
    double math,science,english;
    double total,average;

    cout<<"\nEnter your name: ";
    getline(cin,name);

    cout<<"Enter your marks in Math: ";
    cin>>math;

    cout<<"Enter your marks in Science: ";
    cin>>science;

    cout<<"Enter your marks in English: ";
    cin>>english;
 
    total = math + science + english;
    average = total / 3;

    cout<<"\n -----------------------------------"<<endl;
    cout<<"Student Name: " << name << endl;
    cout<<"Math Marks: " << math << endl;
    cout<<"Science Marks: " << science << endl;
    cout<<"English Marks: " << english << endl;
    cout<<"Total Marks: " << total << endl;
    cout<<"Average Marks: " << average << endl;

    return 0;
}