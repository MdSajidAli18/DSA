// 27. Write a function to find roots of a quadratic equation ax^2 + bx + c = 0.
// Note: The formula to find the roots of a quadratic equation is given below:

// Example
// Input 1: 1
// Input 2: –2
// Input 3: 3
// Output:
// {3.0,–1.0}

// Explanation:
// On substituting the values of a, b, and c in the formula, the roots will be as follows:
// +X = 3.0
// -X = –1.0


#include <iostream>
#include <cmath>    // For sqrt() function
#include <iomanip>  // For setting precision
using namespace std;

void findRoots(double a, double b, double c) {
    
    double discriminant = b * b - 4 * a * c;  // Calculate the discriminant.

    if (discriminant > 0) {
        // Two distinct real roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << fixed << setprecision(1) << "Roots: {" << root1 << ", " << root2 << "}" << endl;  // `fixed` is a manipulator that ensures floating-point numbers are displayed in fixed-point notation (i.e., with a fixed number of decimal places) rather than scientific notation.
        // `setprecision(1)` manipulator sets the number of decimal places to display for floating-point numbers. Here, 1 specifies that the number should be displayed with one digit after the decimal point.

    } else if (discriminant == 0) {
        // One real root (repeated root)
        double root = -b / (2 * a);
        
        cout << fixed << setprecision(1) << "Root: {" << root << "}" << endl;

    } else {
        // No real roots, discriminant is negative
        cout << "No real roots" << endl;
    }
}


int main() {

    double a, b, c;

    cout << "Enter the coefficients a, b, and c of quadratic eqn:" << endl;
    cin >> a >> b >> c;

    // Ensure that a is not zero (as it would not be a quadratic equation)
    if (a == 0) {
        cout << "Coefficient `a` cannot be zero for a quadratic equation." << endl;
        return 1;
    }

    findRoots(a, b, c);

    return 0;
}
