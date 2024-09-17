// 23. Find the sum of the divisors for the N integer number.
// Example 1
// Input:
// 6
// Output:
// 12

// Explanation
// Divisors of 6 are 1, 2, 3, and 6. The sum of these numbers is 12.

// Example 2
// Input:
// 36
// Output:
// 91


#include <iostream>
using namespace std;

int sumOfDivisors(int N) {
    int sum = 0;  //Initializes a variable `sum` to store the sum of divisors.
    
    for (int i = 1; i <= N; ++i) {  //Iterate through all numbers from 1 to N
        if (N % i == 0) {  //Check if `i` is a divisor of `N`
            sum += i;  //Adds `i` to the `sum` if it is a divisor of `N`.
        }
    }
    
    return sum;
}

int main() {
    int N;
    cout << "Enter the number: ";
    cin >> N;

    int result = sumOfDivisors(N);
    cout << "Sum of the divisors: " << result << endl;

    return 0;
}
