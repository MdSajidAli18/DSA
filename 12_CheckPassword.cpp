// 12. Perform the function Checkpassword (char str[], int n)
// Execute the function which happens to be 1 if the str is a valid password or it remains 0.

// Conditions for a valid password: 

// The password should have at least 4 characters.
// It should have at least 1 digit.
// It should have one capital letter.
// It should not have any spaces or obliques (/).
// The first character should not be a number.
 
// Assumption
// The input is not empty.

// Example

// Input:
// aA1_67

// Output:
// 1


#include <iostream>
#include <cctype>  //provides functions for character classification and conversion.
#include <cstring>  //provides functions for C-style string handling.
using namespace std;  //This line allows us to use standard library names without the `std::` prefix.

int Checkpassword(const char str[], int n) {
    // Check if the length of the password is less than 4
    if (n < 4) {  //This block checks if the length of the password is less than 4 characters. If it is, the function returns `0`, indicating an invalid password.
        return 0;
    }

    bool hasDigit = false;  //To keep track of whether the password contains at least one digit (`hasDigit`)
    bool hasCapital = false;  //To keep track of whether the password contains at least capital letter (`hasCapital`)

    // Check the first character
    if (isdigit(str[0])) {  //This block checks if the first character of the password is a digit. If it is, the function returns `0`, indicating an invalid password.
        return 0;
    }

    // Iterate over each character in the string
    for (int i = 0; i < n; ++i) {
        if (isdigit(str[i])) {
            hasDigit = true;
        }
        if (isupper(str[i])) {
            hasCapital = true;
        }
        if (str[i] == ' ' || str[i] == '/') {
            return 0;
        }
    }

    // Check if all conditions are met
    if (hasDigit && hasCapital) {
        return 1;
    }

    return 0;
}

int main() {
    char str[100];
    cout << "Enter the password: ";
    cin >> str;

    int n = strlen(str);  //Calculates the length of the entered password and stores it in `n`.
    int result = Checkpassword(str, n);  //Calls the `Checkpassword` function with the entered password and its length, storing the result in `result`.

    cout << "Result: " << result << endl;

    return 0;
}
