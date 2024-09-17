// 22. Perform a function to reverse a string word-wise. The input here will be the string. In the output, the last word mentioned should come as the first word and vice versa.

// Example
// Input:
// Welcome to code
// Output:
// code to Welcome
// Explanation
// The Reversed string word wise function is applied.

// Example
// Input:
// Code to Crack Puzzle
// Output:
// Puzzle Crack to Code


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string reverseWords(const string& str) {

    vector<string> words;  //Declares a vector of strings to store the individual words extracted from the input string.
    string word;  //Declares a string to temporarily hold each word as it is extracted.
    
    // Traverse the string and extract words
    for (char ch : str) {  //Loops through each character in the input string.
        if (ch == ' ') {  //Checks if the current character is a space.
            if (!word.empty()) {  //If the current word is not empty, it means we have a complete word.
                words.push_back(word);  //Adds the current word to the words vector.
                word.clear();  //Clears the word string to start collecting the next word.
            }
        } else {
            word += ch;  //If the current character is not a space, it adds the character to the current word.
        }
    }

    //After completion of `for` loop, checks if there is a remaining word to be added (handles the last word if the string does not end with a space).
    if (!word.empty()) { 
        words.push_back(word);
    }

    // Reverse the order of the words
    reverse(words.begin(), words.end());

    // Join the words back into a single string
    string result; //Declares a string to hold the final result.
    for (size_t i = 0; i < words.size(); ++i) {  // Loops through each word in the reversed `words` vector.
        if (i > 0) result += " ";  //Adds a space before each word except the first one.
        result += words[i];  //Adds the current word to the result string.
    }

    return result;  //Returns the final reversed string.
}


int main() {

    string input;
    cout << "Enter the string: ";
    getline(cin, input);

    string reversed = reverseWords(input);
    cout << "Reversed string: " << reversed << endl;

    return 0;
}
