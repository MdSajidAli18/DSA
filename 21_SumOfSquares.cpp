// 21. Adam decides to do some charity work. From day 1 till day n, he will give i^2 coins to charity. On day ‘i’ (1 < = i < = n), find the number of coins he gives to charity.
// Example 1
// Input:
// 2
// Output:
// 5
// Explanation:
// There are 2 days.
// Example 2

// Input:
// 3

// Output:
// 14



#include <iostream>
using namespace std;

int sumOfSquares(int n) {
    return (n * (n + 1) * (2 * n + 1)) / 6;
}


int main() {

    int n;
    cout << "Enter the number of days: ";
    cin >> n;

    if (n <= 0) {
        cout << "Number of days should be greater than 0." << endl;
        return 1;
    }

    int result = sumOfSquares(n);
    cout << "Total number of coins given in " << n << " days: " << result << endl;

    return 0;
}
