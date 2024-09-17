// 25. Find a string of a length of 1000 for a large number. Output is the modulo of 11. The output specification is to return the remainder modulo 11 of the input.
// Input:
// 121
// Output:
// 0

// Explanation
// 121 mod 11 = 0


#include <iostream>
#include <string>

using namespace std;

// Function to find the modulo 11 of a large number represented as a string
int modulo11(const string& numStr) {
    int remainder = 0;

    for (char digit : numStr) {  //This loop iterates over each character `digit` in the string `numStr`.
        remainder = (remainder * 10 + (digit - '0')) % 11;   // `(digit - '0')` converts the character digit to its integer value.
    }

    return remainder;
}

int main() {
    string numStr;
    cout << "Enter the large number: ";
    cin >> numStr;

    int result = modulo11(numStr);
    cout << "Remainder modulo 11: " << result << endl;

    return 0;
}
