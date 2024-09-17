// 17. Create web access management to the kth largest number. It will accept an integer k and an array arr as its conditions and has to return the greatest element based on the value of k. That is, if k = 0, return the greatest element. If k = 1, return the second greatest element, and so on.
// Example

// Suppose the array contains values like {74, 85, 102, 99, 101, 56, 84} and the integer k is 2. The method will return 99, the third greatest element, as there are only two (according to the value of k) values greater than 99 (101 and 102).



#include <iostream>
#include <vector>
#include <algorithm> // For sort
using namespace std;

int findKthLargestElement(vector<int>& arr, int k) {
    
    sort(arr.begin(), arr.end(), greater<int>());  // Sort the array in descending order
    
    return arr[k];  // The k-th largest element
}

int main() {

    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int result = findKthLargestElement(arr, k);
    cout << "The " << k << "-th largest element is: " << result << endl;
    
    return 0;
}
