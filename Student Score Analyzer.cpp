#include <iostream>      // Allows the program to use input (cin) and output (cout)
using namespace std;     // So we don't need to write std:: before cout and cin

int main()               // Main function where the program starts
{
    const int SIZE = 5;  // Declare a constant named SIZE with value 5 (number of students)

    int scores[SIZE];    // Declare an integer array named scores to store 5 scores

    int *ptr = scores;   // Declare a pointer ptr and make it point to the first element of scores array

    // Input scores
    for (int i = 0; i < SIZE; i++)   // Loop 5 times (i = 0 to 4)
    {
        cout << "Enter score for Student " << i + 1 << ": "; // Ask the user to enter a score

        cin >> *(ptr + i);    // Store the input into the array using pointer arithmetic
                               // *(ptr + i) means the value at address ptr + i
    }

    cout << "\nStudent Scores:\n";   // Print a heading

    int total = 0;          // Variable to store the sum of all scores

    int highest = *ptr;     // Assume the first score is the highest initially

    int lowest = *ptr;      // Assume the first score is the lowest initially

    // Display scores and calculate total, highest and lowest
    for (int i = 0; i < SIZE; i++)   // Loop through all scores
    {
        cout << "Student " << i + 1 << ": " << *(ptr + i) << endl; // Display each student's score using pointer arithmetic

        total += *(ptr + i); // Add the current score to total

        if (*(ptr + i) > highest)
            highest = *(ptr + i); // If current score is greater than highest, update highest

        if (*(ptr + i) < lowest)
            lowest = *(ptr + i); // If current score is lower than lowest, update lowest
    }

    double average = (double)total / SIZE; // Calculate the average  // (double) converts total to decimal before division

    cout << "\nTotal Score: " << total << endl;// Display the total score

    cout << "Average Score: " << average << endl; // Display the average score

    cout << "Highest Score: " << highest << endl; // Display the highest score

    cout << "Lowest Score: " << lowest << endl; // Display the lowest score

    return 0;   // End the program successfully
}