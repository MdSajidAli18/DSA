// 13. Execute this function Void MaxInArray(int arr[], int length)
// This function helps in finding the maximum element in the array. Execute this function to print the maximum element in the array with its index.

// Assumptions

// The index in the array for all the elements starts at 0.
// The maximum element is in a different line in the output.
// There has to be only one maximum element.
// The function prints only what is required.
 
// Example

// Input:
// 23 45 82 27 66 12 78 13 71 86

// Output:
// 86
// 9

// Explanation
// The maximum element is 86 and the array is 9.


#include <iostream>
using namespace std;

void MaxInArray(int arr[], int length) {
    // Initialize the max element and its index
    int maxElement = arr[0]; //Assumes that the first element is the maximum 
    int maxIndex = 0;

    for (int i = 1; i < length; ++i) {  //This block iterates through the array starting from the second element (index 1) to find the maximum element and its index.
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }

    cout << maxElement << endl;
    cout << maxIndex << endl;
}

int main() {

    int length;
    cout << "Enter the number of elements in the array: ";
    cin >> length;

    int arr[length];  // Declare an array of the specified length

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < length; ++i) {
        cin >> arr[i];
    }

    MaxInArray(arr, length);

    return 0;
}
