// 14. Change frequent character
// The function to execute is
// ChatFrequentcharacter(Char str, char x)

// This function has a string and a character. This function requires replacing the most used character in the str with the ‘x’ character.

// Note: If two characters have the same frequency, then we will have to consider the frequency which has the lower ASCII value.

// Example

// Input:
// str: bbadbbababb
// char x: t

// Output:
// ttadttatatt

// Explanation
// The maximum character repeated is ‘b’ that is replaced with ‘t’.


#include <iostream>
#include <unordered_map>  //unordered map for frequency counting
#include <string>  //For string manipulation
using namespace std;

string ReplaceFrequentCharacter(const string& str, char x) {  //Defines the function `ReplaceFrequentCharacter` which takes a constant reference to a string `str` and a character `x`. It returns the modified string.
    unordered_map<char, int> frequency;  //An unordered map to count the frequency of characters.
    char mostFrequentChar = '\0';  //Holds the most frequent character.
    int maxFrequency = 0;  //Tracks the maximum frequency encountered.

    // Count the frequency of each character and find the most frequent character
    for (char ch : str) {  //Iterates through each character in the string.
        frequency[ch]++;  //Updates the frequency of each character.
        if (frequency[ch] > maxFrequency || 
            (frequency[ch] == maxFrequency && ch < mostFrequentChar)) {  //Checks if the current character is more frequent or(||) has a lower ASCII value in case of a tie.
            maxFrequency = frequency[ch];
            mostFrequentChar = ch;
        }
    }

    // Create a new string with the most frequent character replaced
    string result = str;  //Copies the original string `str` into `result`.
    for (char& ch : result) {
        if (ch == mostFrequentChar) { //Replaces occurrences of the most frequent character with `x`.
            ch = x;
        }
    }

    return result;
}

int main() {

    string str;
    char x;

    cout << "Enter the string: ";
    getline(cin, str);

    cout << "Enter the character to replace the most frequent character with: ";
    cin >> x;

    string result = ReplaceFrequentCharacter(str, x);
    cout << "Result: " << result << endl;

    return 0;
}
