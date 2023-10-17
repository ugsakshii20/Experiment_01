// C++ Program to Find Sum and Average of Three Numbers
// including necessary libraries.

#include <iostream>
using namespace std;

int main() {
    // Declaring integer variable
    int a, b, c; 
    // Declaring float variables
    float average; 

    // Asking for input from the user.
    cout << "Enter the first number: "; 
    cin >> c;
    cout << "Enter the second number: "; 
    cin >> b;
    cout << "Enter the second number: "; 
    cin >> c;

    // Calculating sum.
    float sum = a + b + c; 

    // Finding average using formula.
    average = sum / 3;

    // Displaying output.
    cout << "Sum of the three numbers: " << sum << endl; 
    cout << "Average of the three numbers: " << average << endl; 
    return 0;
}
