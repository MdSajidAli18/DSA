// 8. Perform the function: Int operationchoices(int c, int n, int a, int b). This function considers three positive inputs of a, b and c.
// Execute the function to get:
// (a + b), if c = 1
// (a – b), if c = 2
// (a x b), if c = 3
// (a / b), if c = 4

// Example:

// Input:
// a: 12
// b: 16
// c: 1

// Output:
// 28

// Explanation
// C = 1, hence the function is (a + b). Hence, the output is 28.



#include <iostream>
using namespace std;

// Function to perform the operation based on the value of c
int operationChoices(int a, int b, int c) {
    switch (c) {
        case 1:
            return a + b;
        case 2:
            return a - b;
        case 3:
            return a * b;
        case 4:
            return (b != 0) ? a/b : 0;  // Avoid division by zero
        default:
            return 0;  // Return 0 if the operation choice is invalid
    }
}

int main() {
    int a, b, c;

    // Prompt the user for input
    cout << "Enter value for a: ";
    cin >> a;

    cout << "Enter value for b: ";
    cin >> b;

    cout << "Enter the operation choice (1 for add, 2 for subtract, 3 for multiply, 4 for divide): ";
    cin >> c;

    int result = operationChoices(a, b, c);
    cout << "Result: " << result << endl;

    return 0;
}
