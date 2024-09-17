// 3. Write a function to validate if the provided two strings are anagrams or not. If the two strings are anagrams, then return ‘yes’. Otherwise, return ‘no’.
// Input:

// Input 1: 1st string
// Input 2: 2nd string

// Output:
// (If they are anagrams, the function will return ‘yes’. Otherwise, it will return ‘no’.)

// Example

// Input 1: Listen
// Input 2: Silent

// Output:
// Yes

// Explanation

// Listen and Silent are anagrams (an anagram is a word formed by rearranging the letters of the other word).




#include<iostream>
#include<string>
#include<vector>
using namespace std;

string areAnagrams(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return "No";
    }

    vector<int> count1(26, 0); // Creates a vector of size 26 (for the 26 letters of the English alphabet) initialized with zeros. This vector will store the frequency of each letter in `str1`.
    vector<int> count2(26, 0); // Similarly, this vector stores the frequency of each letter in `str2`.

    // Count frequency of each character in str1 and str2
    for (int i = 0; i < str1.length(); ++i) {
        count1[tolower(str1[i]) - 'a']++;
        count2[tolower(str2[i]) - 'a']++;
    }

    // Compare the frequency counts
    for (int i = 0; i < 26; ++i) {
        if (count1[i] != count2[i]) {
            return "No";
        }
    }

    return "Yes";
}

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);

    string result = areAnagrams(str1, str2);
    cout << result << endl;

    return 0;
}
