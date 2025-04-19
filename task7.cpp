//Grading system
#include <iostream>
using namespace std;
int main()
 {
    int marks;
    cout << "Enter your marks: "; // Taking user input to enter marks of student
    cin >> marks;
    
    // Input validation: check if the marks are within a valid range (0-100)
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks! Please enter a value between 0 and 100." << endl;
        return 1; // Exit the program if input is invalid
    }
    // Determining grades based on marks
    if (marks >= 90)
        cout << "Your grade is A." << endl;
    else if (marks >= 80)
        cout << "Your grade is B." << endl;
    else if (marks >= 70)
        cout << "Your grade is C." << endl;
    else if (marks >= 60)
        cout << "Your grade is D." << endl;
    else 
        cout << "Your grade is F." << endl;

    return 0;
}
