// Coding Question 3
// Implement the following Function

// The function def ProductSmallestPair(sum, arr) accepts an integers sum and an integer array arr of size n. Implement the function to find the pair, (arr[j], arr[k]) where j!=k, Such that arr[j] and arr[k] are the least two elements of array (arr[j] + arr[k] <= sum) and return the product of element of this pair

// NOTE

// Return -1 if array is empty or if n<2
// Return 0, if no such pairs found
// All computed values lie within integer range
// Example

// Input

// sum:9

// Arr:5 2 4 3 9 7 1

// Output

// 2

// Explanation

// Pair of least two element is (2, 1) 2 + 1 = 3 < 9, Product of (2, 1) 2*1 = 2. Thus, output is 2



#include <iostream>
#include <vector>
#include<climits> // For INT_MAX
using namespace std;

int productSmallestPair(int sum, vector<int>& arr) {
    // Check for edge cases
    if (arr.size() < 2) return -1;  //If the size of the array is less than 2, return -1 as there are not enough elements to form a pair.
    
    //Find the two smallest elements
    int firstMinElement = INT_MAX, secondMinElement = INT_MAX;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] < firstMinElement){
            secondMinElement = firstMinElement;
            firstMinElement = arr[i];
        }else if(arr[i] < secondMinElement){
            secondMinElement = arr[i];
        }
    }
    
    int smallestPairSum = firstMinElement + secondMinElement;  //Find the pair of the smallest/least two elements
    if (smallestPairSum <= sum) {  //Check if their sum is less than or equal to the given sum
        return firstMinElement * secondMinElement;  //Return the product of the two smallest elements
    } else {
        return -1;  //If no such pair found, return -1
    }
}


int main(){
    int sum;
    cout << "Enter the value of sum" << endl;
    cin >> sum;

    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int result = productSmallestPair(sum, arr);
    cout << "Product is: " << result << endl;

    return 0;
}



// Output: 2. (1*2)