// 5. Execute the function for the given purpose.
// When the sum of the digits exceeds a total of 9, a carry digit is added to the right-left of the digit. Execute the function: Int Numberofcarry(Integer num 1, Integer num 2)

// Assumption

// num1, num2 > = 0

// Example

// Input:
// num1: 451
// num2: 349

// Output:
// 2

// Explanation

// When we add these two numbers from the right to the left, we get two carries. The value of each of the carries is 1. Hence, the output is the total of these two carries, i.e., 2.




#include <iostream>
using namespace std;

int numberofcarry(int num1, int num2) {
    int carry = 0;   // Variable to store the carry from each digit addition
    int carryCount = 0;  // Variable to count the total number of carries
    
    while (num1 > 0 || num2 > 0) {
        // Extract the rightmost digits
        int digit1 = num1 % 10;
        int digit2 = num2 % 10;

        // Calculate the sum of the digits plus any carry from the previous step
        int sum = digit1 + digit2 + carry;

        // If the sum is 10 or greater, we have a carry
        if (sum >= 10) {
            carry = 1;   // Carry for the next step
            carryCount++;  // Increment the carry count
        } else {
            carry = 0;  // No carry for the next step
        }

        // Remove the rightmost digit from both numbers
        num1 = num2/10;
        num2 = num2/10;
    }

    return carryCount;  // Return the total number of carries
}

int main() {
    int num1, num2;

    // Prompt the user for input
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int result = numberofcarry(num1, num2);
    cout << "Number of carries: " << result << endl;

    return 0;
}
