// 11. The binary number system only uses two digits 1 and 0.
// Perform the function: Int OperationsBinarystring(char* str)

// Assumptions

// Return to –1 if str is null.
// The str is odd.
 
// Example:

// Input:
// Str: ICOCICIAOBI

// Output:
// 1

// Explanation
// The input when expanded is “1 XOR 0 XOR 1 XOR 1 XOR 1 AND 0 OR 1”. The result becomes 1 and hence the output is 1.




#include <iostream>
#include <cstring>  //allows the use of C-style string manipulation functions.
using namespace std;

// Function to perform binary operations based on the input string
int OperationsBinarystring(const char* str) {  // `const char* str` ensures that the input string `str` is not modified within the function.
    // Check if the input string is null
    if (str == nullptr) {
        return -1;
    }

    // Get the length of the string
    int len = strlen(str);  //calculates the length of the input string `str` using the `strlen` function and stores it in the variable `len`.

    // Initialize the result with the first binary digit
    int result = (str[0] == 'I') ? 1 : 0;  // This line initializes the `result` variable based on the first character of the input string `str`. If the first character is `I`, `result` is set to `1`. Otherwise, `result` is set to `0`.

    // Iterate over the string and evaluate the operations
    for (int i = 1; i < len; i += 2) {
        // Get the current operator
        char op = str[i];

        // Get the next binary digit
        int nextDigit = (str[i + 1] == 'I') ? 1 : 0;

        // Perform the operation based on the operator
        switch (op) {
            case 'C': // XOR operation
                result ^= nextDigit;
                break;
            case 'A': // AND operation
                result &= nextDigit;
                break;
            case 'B': // OR operation
                result |= nextDigit;
                break;
            default:
                // If the character is not a valid operator, we can ignore or handle it accordingly
                return -1; // Invalid operator character
        }
    }

    // Return the final result
    return result;
}

int main() {
    // Declare a string to hold the user input
    string str;
    
    // Prompt the user for input
    cout << "Enter the binary operation string (e.g., ICOCICIAOBI): ";
    cin >> str;

    // Perform the binary operations based on the input string
    int result = OperationsBinarystring(str.c_str());

    // Output the result
    cout << "Result: " << result << endl;

    return 0;
}
