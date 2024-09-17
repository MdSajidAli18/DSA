// Accenture Coding Question 1

// Coding Question 1
// The function def differenceofSum(n, m) accepts two integers n, m as arguments Find the sum of all numbers in range from 1 to m(both inclusive) that are not divisible by n. Return difference between sum of integers not divisible by n with sum of numbers divisible by n.

// Assumption:

// n>0 and m>0
// Sum lies between integral range
// Example

// Input
// n:4
// m:20
// Output
// 90

// Explanation

// Sum of numbers divisible by 4 are 4 + 8 + 12 + 16 + 20 = 60
// Sum of numbers not divisible by 4 are 1 +2 + 3 + 5 + 6 + 7 + 9 + 10 + 11 + 13 + 14 + 15 + 17 + 18 + 19 = 150
// Difference 150 – 60 = 90


#include<iostream>
using namespace std;

int differenceOfSums(int n, int m){
    int sum1, sum2 = 0;
    for(int i = 0; i <= m; i++){
        if(i%n == 0){
            sum1 = sum1+i;
        }else{
            sum2 = sum2+i;
        }
    }

    return sum2 - sum1;
}

int main(){
    int n, m;

    cout << "Enter tha value of n: ";
    cin >> n;

    cout << "Enter tha value of m: ";
    cin >> m;

    int result = differenceOfSums(n, m);
    cout << result;
    return 0;
}

