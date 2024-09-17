// 25. Execute a function that accepts the integer array of length ‘size’ and finds out the maximum number that can be formed by permutation.
// Note: You will have to rearrange the numbers to make the maximum number.

// Example
// Input:
// 34 79 58 64
// Output:
// 98765443

// Explanation
// All digits of the array are 3, 4, 7, 9, 5, 8, 6, and 4. The maximum number found after rearranging all the digits is 98765443.


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// Function to find the maximum number that can be formed by permutation of digits
string formMaxNumber(const vector<int>& arr) {
    vector<char> digits;  //Declares a vector of characters to store individual digits extracted from the numbers in the array.
    
    // Extract digits from each number and store them in a vector
    for (int num : arr) {  //Range-based `for` loop to iterate through each integer in the input vector `arr`.
        string numStr = to_string(num);  //Converts the current integer `num` to a string `numStr`.
        for (char digit : numStr) {  //Nested range-based for loop to iterate through each character (digit) in the string `numStr`.
            digits.push_back(digit);  //Adds the character `digit` to the `digits` vector.
        }
    }
    
    // Sort the digits in descending order
    sort(digits.begin(), digits.end(), greater<char>());
    
    // Combine the sorted digits to form the largest possible number
    string maxNumber; // Declares an empty string `maxNumber` to store the resulting largest number.
    for (char digit : digits) {  //Range-based for loop to iterate through each character (digit) in the sorted `digits` vector.
        maxNumber += digit;  // Appends the character `digit` to the `maxNumber` string.
    }
    
    return maxNumber;  //Returns the `maxNumber` string as the result of the function.
}


int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    string result = formMaxNumber(arr);
    cout << "Maximum number formed: " << result << endl;

    return 0;
}
