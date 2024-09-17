// 7. The given function has a string (str) and two characters, ch1 and ch2. Execute the function in such a way that str returns to its original string, and all the events in ch1 are replaced by ch2, and vice versa.
// Replacecharacter(Char str1, Char ch1, Int 1, Char ch2)

// Assumption

// This string has only alphabets that are in lower case.

// Example

// Input:
// str: apples
// ch1: a
// ch2: p

// Output:
// paales

// Explanation
// All the ‘a’ in the string is replaced with ‘p’. And all the ‘p’s are replaced with ‘a’.



#include <iostream>
#include <string>
using namespace std;

// Function to replace characters in a string
string ReplaceCharacter(string str, char ch1, char ch2) {
    for (char &c : str) {  //To iterates through each character in the string `str`.
        if (c == ch1) { //If a character matches `ch1`, it is replaced with `ch2`.
            c = ch2;
        } else if (c == ch2) {  //If a character matches `ch2`, it is replaced with `ch1`.
            c = ch1;
        }
    }
    return str;  //returns the modified string.
}

int main() {
    string str;
    char ch1, ch2;

    // Prompt the user for input
    cout << "Enter the string: ";
    getline(cin, str);

    cout << "Enter the first character: ";
    cin >> ch1;

    cout << "Enter the second character: ";
    cin >> ch2;

    string result = ReplaceCharacter(str, ch1, ch2);
    cout << "Resulting string: " << result << endl;

    return 0;
}
