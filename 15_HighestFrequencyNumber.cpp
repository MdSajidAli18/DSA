// 15. In a given list of integers, find the number that has the highest frequency. If there are one or more such numbers, give the smaller one as output.
// Input:
// 3
// 7
// 2 4 5 2 3 2 4
// 6
// 1 2 1 1 2 1
// 10
// 1 1 1 1 1 1 1 1 1 1

// Output:
// 2
// 1
// 1



#include <iostream>  //For input and output operations.
#include <vector> //To use the `vector` container.
#include <unordered_map>  // To use the hash map for frequency counting.
#include <climits>  //To use constants like `INT_MAX`.
using namespace std;

int highestFrequencyNumber(const vector<int>& nums) {
    unordered_map<int, int> frequencyMap;  //Declared to store the frequency of each number.
    int maxFrequency = 0;  // Initializes the maximum frequency found to 0.
    int result = INT_MAX;  //Initializes the result to the maximum possible integer value.

    // Counting the frequency of each number
    for (int num : nums) {  //A range-based `for` loop is used to iterate over each number in the `nums` vector.
        frequencyMap[num]++;  //For each `num`, its frequency is incremented in the `frequencyMap`.
        // Update the maximum frequency and result number
        if (frequencyMap[num] > maxFrequency) {
            maxFrequency = frequencyMap[num];
            result = num;
        } else if (frequencyMap[num] == maxFrequency) {
            result = min(result, num);
        }
    }
    return result;
}

int main() {

    int t;  //Declared to store the number of test cases.
    cout << "Enter the number of test cases: ";
    cin >> t;
    
    while (t--) {  //A `while` loop is used to iterate over each test case. The loop will run `t` times.

        int n;  //Declared to store the number of elements in the current test case.
        cout << "Enter the number of elements: ";
        cin >> n;
        
        vector<int> nums(n);  //Declared to store the elements of the current test case. The size of the vector is set to `n`.
        cout << "Enter the elements: ";
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }
        
        int result = highestFrequencyNumber(nums);
        cout << "Most frequent no. is: " << result << endl;
    }
    
    return 0;
}


// Example Walkthrough:

// Enter the number of test cases: 3
// Enter the number of elements: 7
// Enter the elements: 2 4 5 2 3 2 4
// Most frequent no. is: 2
// Enter the number of elements: 6
// Enter the elements: 1 2 1 1 2 1
// Most frequent no. is: 1
// Enter the number of elements: 10
// Enter the elements: 1 1 1 1 1 1 1 1 1 1
// Most frequent no. is: 1

// === Code Execution Successful ===

// The code processes the input as follows:

// First Test Case:

// Elements: 2 4 5 2 3 2 4
// Frequency Map: {2: 3, 4: 2, 5: 1, 3: 1}
// Highest frequency is 3 for number 2.
// Output: 2


// Second Test Case:

// Elements: 1 2 1 1 2 1
// Frequency Map: {1: 4, 2: 2}
// Highest frequency is 4 for number 1.
// Output: 1


// Third Test Case:

// Elements: 1 1 1 1 1 1 1 1 1 1
// Frequency Map: {1: 10}
// Highest frequency is 10 for number 1.
// Output: 1

