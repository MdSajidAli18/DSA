
// 28. Write a function to find if the given string is a palindrome or not. Return 1 if the input string is a palindrome, else return 0.
// Input:
// level
// Output:
// 1

// Explanation:
// The reverse of the string ‘level’ is ‘level’. As they are the same, the string is a palindrome.


#include <iostream>
#include <string>
using namespace std;

int isPalindrome(const string& str) {
    int start = 0;          // Pointer to the beginning of the string
    int end = str.size() - 1; // Pointer to the end of the string

    // Compare characters from both ends of the string
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
        start++;   // Move pointer to the right
        end--;  // Move pointer to the left
    }

    return 1; // It is a palindrome
}

int main() {

    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    int result = isPalindrome(str);
    cout << result << endl;
    
    return 0;
}
