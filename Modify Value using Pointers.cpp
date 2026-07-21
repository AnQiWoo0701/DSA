#include <iostream>
using namespace std;

int main() {
    // Create an integer variable with value 10
    int num = 10;

    // Display the original value
    cout << "Original Value: " << num <<endl;

    //Create a pointer to the variable
    int* ptr = &num;

    //Change the value to 50 using the pointer
    *ptr = 50;

    //Display the updated value
    cout << "Updated Value: " << num <<endl;

    return 0;
}