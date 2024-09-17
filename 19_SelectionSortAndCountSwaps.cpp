// 20. Write a program to count the number of swaps required to sort a given list of integers in ascending order using the selection sort algorithm.
// Input:
// 2
// 3
// 4 2 5
// 5
// 10 11 8 7 1

// Output:
// 1
// 3



#include <iostream>
#include <vector>
using namespace std;

int selectionSortAndCountSwaps(vector<int>& arr) {
    int n = arr.size();
    int swapCount = 0;

    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;

        // Find the minimum element in the remaining unsorted array
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
            swapCount++;
        }
    }

    return swapCount;
}


int main() {

    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;

    while (t--) {

        int n;
        cout << "Enter the number of elements: ";
        cin >> n;

        vector<int> arr(n);
        cout << "Enter the elements: ";
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int swapCount = selectionSortAndCountSwaps(arr);
        cout << swapCount << endl;
    }

    return 0;
}
