// 20. Form an array of 1000 integers and find out the second-largest number. If there is no second largest number, return the value to –1.
// Example
// Input 1:
// 3
// Input 2:
// {2,1,2}
// Output:
// 1
// Explanation
// The integer 1 is the second largest in the array.

// Example
// Input 1:
// 5
// Input 2:
// {4,7,9,8,0}
// Output:
// 8



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findSecondLargest(vector<int>& arr) {

    if (arr.size() < 2) return -1;

    sort(arr.begin(), arr.end());  //Sort the array in ascending order

    int largest = arr.back();  //This line stores the last element of the sorted array in the largest variable. Since the array is sorted in ascending order, the last element is the `largest` element.
    for (int i = arr.size() - 2; i >= 0; --i) {  //This loop iterates through the array starting from the second last element (since the last element is the largest) and goes towards the beginning of the array.
        if (arr[i] < largest) {
            return arr[i];
        }
    }

    return -1;
}

int main() {

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n < 2) {
        cout << -1 << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int result = findSecondLargest(arr);
    cout << result << endl;

    return 0;
}
