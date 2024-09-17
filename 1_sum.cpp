// 9. Perform the function Int calculate(int m, int n). This function needs two positive integers. Calculate the sum of numbers between these two numbers that are divisible by 3 and 5.
// Assumption
// m > n > = 0

// Example

// Input:
// m: 12
// n: 50

// Output:
// 90

// Explanation
// The numbers between 12 and 50 that are divisible by 3 and 5 are 15, 30, and 45. The sum of these numbers is 90.


#include <iostream>
using namespace std;

// Function to calculate the sum of numbers between m and n that are divisible by both 3 and 5
int calculate(int m, int n) {
    int sum = 0;
    
    // Loop through the range from m to n
    for (int i = m; i <= n; ++i) {
        // Check if the number is divisible by both 3 and 5
        if (i % 3 == 0 && i % 5 == 0) {
            sum += i;
        }
    }
    
    return sum;
}

int main() {
    int m, n;

    // Prompt the user for input
    cout << "Enter the value for m: ";
    cin >> m;

    cout << "Enter the value for n: ";
    cin >> n;

    int result = calculate(m, n);
    cout << "Sum of numbers divisible by both 3 and 5: " << result << endl;

    return 0;
}
