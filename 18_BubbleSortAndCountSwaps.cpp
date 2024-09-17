// 18. We have mentioned a list of integers that have no duplicates. Find how many swaps it will take to sort the list in ascending order using Bubble sort.
// Input:
// 3
// 5
// 2 1 4 6 3
// 10
// 123 21 34 45 25 675 23 44 55 900
// 1
// 23

// Output:
// 3
// 16
// 0


#include <iostream>
#include <vector>
using namespace std;

int bubbleSortAndCountSwaps(vector<int>& arr) {
    int n = arr.size();
    int swapCount = 0;
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {

                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapCount++;
                swapped = true;
            }
        }

        // If no two elements were swapped in the inner loop, break
        if (!swapped) {
            break;
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
        
        int swapCount = bubbleSortAndCountSwaps(arr);
        cout << swapCount << endl;
    }
    
    return 0;
}
