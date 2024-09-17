// 10. Execute the function for the given purpose.

// Input:
// arr: 3 2 1 7 5 4

// Output: 7

// Explanation:
// Second largest among even position elements(1 3 5) is 3
// Second largest among odd position element(2, 7, 4) is 4
// Thus output is 3+4 = 7


#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// Function to calculate the sum of the second largest numbers from even and odd indexed elements
int sumOfSecondLargestElements(const vector<int>& array) {
    int largestEven = INT_MIN, secondLargestEven = INT_MIN;
    int largestOdd = INT_MIN, secondLargestOdd = INT_MIN;

    // Find the largest and second largest elements in even and odd indexed positions
    for (int i = 0; i < array.size(); ++i) {
        if (i % 2 == 0) { // Even index
            if (array[i] > largestEven) {
                secondLargestEven = largestEven;
                largestEven = array[i];
            } else if (array[i] > secondLargestEven) {
                secondLargestEven = array[i];
            }
        } else { // Odd index
            if (array[i] > largestOdd) {
                secondLargestOdd = largestOdd;
                largestOdd = array[i];
            } else if (array[i] > secondLargestOdd) {
                secondLargestOdd = array[i];
            }
        }
    }

    // Return the sum of the second largest numbers, if they exist
    return (secondLargestEven == INT_MIN ? 0 : secondLargestEven) + (secondLargestOdd == INT_MIN ? 0 : secondLargestOdd);
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size!" << endl;
        return 1;
    }

    vector<int> array(size);
    cout << "Enter the elements of the array:";
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    int result = sumOfSecondLargestElements(array);
    cout << "Sum of the second largest elements: " << result << endl;

    return 0;
}




// Example

// Input:
// Array Size: 5
// Elements: 3 4 1 7 9

//   Output: 7