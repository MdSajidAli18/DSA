// Coding Question 4
// N-base notation is a system for writing numbers which uses only n different symbols, This symbols are the first n symbols from the given notation list(Including the symbol for o) Decimal to n base notation are (0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A,11:B and so on upto 35:Z)

// Implement the following function, Char* DectoNBase(int n, int num):

// The function accept positive integer n and num Implement the function to calculate the n-base equivalent of num and return the same as a string

// Steps:

// Divide the decimal number by n,Treat the division as the integer division
// Write the the remainder (in  n-base notation)
// Divide the quotient again by n, Treat the division as integer division
// Repeat step 2 and 3 until the quotient is 0
// The n-base value is the sequence of the remainders from last to first
// Assumption:

// 1 < n < = 36

// Example

// Input

// n: 12

// num: 718

// Output

// 4BA

// Explanation

// num       Divisor       quotient       remainder

// 718           12               59                 10(A)

// 59             12                4                   11(B)

// 4               12                0                   4(4)




#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

char* DecimalToBaseN(int n, int num) {  //Declares a function named `DecimalToBaseN` that takes two integer parameters `n` and `num` and returns a pointer to a character (`char*`).
   
    const char symbols[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";  //Declares a constant character array `symbols` that holds the characters used for bases up to 36. These characters represent the digits 0-9 and letters A-Z.
    
    if (num == 0) {  //Checks if the input number `num` is zero. If it is, it allocates a new character array of size 2, sets the first element to '0' and the second element to the null terminator ('\0'), and returns this array.
        char* result = new char[2];
        result[0] = '0';
        result[1] = '\0';
        return result;
    }

    string tempResult;  //Declares a temporary `string` to hold the intermediate result of the base conversion.

    // Process the number to create the n-base representation
    while (num > 0) {  //Loops as long as `num` is greater than zero.
        int remainder = num % n;  //Calculates the remainder of `num` divided by `n`.
        tempResult = tempResult + symbols[remainder];//Appends the symbol corresponding to the remainder to `tempResult`.
        num = num/n;  //Updates `num` to be the quotient of `num` divided by `n`.
    }

    // The remainders are collected in reverse order, so reverse the string to get the correct order of the base-n representation.
    reverse(tempResult.begin(), tempResult.end());

    // Allocate memory for the result string
    char* result = new char[tempResult.size() + 1];  //Allocates memory for the result C-style string, with an extra space for the null terminator.
    strcpy(result, tempResult.c_str());  //Copies the content of `tempResult` to the allocated memory using `strcpy`.

    return result;  //Returns the pointer to the dynamically allocated C-style string.
}

int main() {
    int n;
    cout << "Enter the diviser: ";
    cin >> n;

    int num;
    cout << "Enter the decimal number that you want to convert: ";
    cin >> num;

    char* result = DecimalToBaseN(n, num);
    cout << "Converted number is: " << result;

    return 0;
}
