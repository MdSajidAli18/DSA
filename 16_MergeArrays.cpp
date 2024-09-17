// 16. Execute the function for the given purpose.
// Write a function mergeArrays which merges two sorted arrays to create one single sorted array. Complete the function int* mergeArrays(int a[], int b[], int asize, int bsize) below which takes the pointers to the first element of the two sorted arrays and the size of the arrays, and returns the base address of the final sorted array.

// Input:
// 4 // Size of 1st array
// 1 2 3 6 // Elements of 1st array
// 3 // Size of 2nd array
// 4 5 7 // Elements of 2nd array

// Output:
// 1
// 2
// 3
// 4
// 5
// 6
// 7


#include <iostream>
using namespace std;

int* mergeArrays(int a[], int b[], int asize, int bsize) {
    int* mergedArray = new int[asize + bsize]; // Allocate memory for the merged array
    int i = 0, j = 0, k = 0;  //The variables i, j & k are used to index the elements of the first array `a`, second array `b` and `mergedArray` respectively.

    // Merge the arrays
    while (i < asize && j < bsize) {
        if (a[i] <= b[j]) {
            mergedArray[k++] = a[i++];
        } else {
            mergedArray[k++] = b[j++];
        }
    }

    // Copy remaining elements of a[], if any
    while (i < asize) {
        mergedArray[k++] = a[i++];
    }

    // Copy remaining elements of b[], if any
    while (j < bsize) {
        mergedArray[k++] = b[j++];
    }

    return mergedArray;
}

int main() {
    
    int asize, bsize;
    
    cout << "Enter the size of the first array: ";
    cin >> asize;
    int* a = new int[asize];
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < asize; ++i) {
        cin >> a[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> bsize;
    int* b = new int[bsize];
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < bsize; ++i) {
        cin >> b[i];
    }

    int* mergedArray = mergeArrays(a, b, asize, bsize);

    cout << "Merged array: " << endl;
    for (int i = 0; i < asize + bsize; ++i) {
        cout << mergedArray[i] << endl;
    }

    // Clean up the allocated memory
    delete[] a;
    delete[] b;
    delete[] mergedArray;

    return 0;
}
