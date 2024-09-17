// 26. Find out if the given set of points are on a straight line or not. If the points are on a straight line, then return the equation. If not, then return 0.
// Example
// Input:
// 3
// 1 1 2 2 3 3
// Output:
// 1x – 1y = 0

// Explanation
// The three points here are [1,1], [2,2], and [3,3]. These lie on a line, so the function returned the equation.


#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to check if three points are collinear
bool areCollinear(int x1, int y1, int x2, int y2, int x3, int y3) {
    return (y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1);
}

// Function to return the line equation if points are collinear
string getLineEquation(int x1, int y1, int x2, int y2) {
    int a = y2 - y1;
    int b = x1 - x2;
    int c = a * x1 + b * y1;
    
    // Constructing the equation ax - by = c in string format
    string equation = to_string(a) + "x ";
    equation += (b < 0) ? "+ " : "- ";
    equation += to_string(abs(b)) + "y = " + to_string(c);
    
    return equation;
}

int main() {
    int n;
    cout << "Enter the number of points: ";
    cin >> n;
    
    if (n < 2) {
        cout << "0" << endl;
        return 0;
    }
    
    vector<int> x(n), y(n);
    cout << "Enter the points (x y): ";
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
    }
    
    bool collinear = true;
    for (int i = 2; i < n; ++i) {
        if (!areCollinear(x[0], y[0], x[1], y[1], x[i], y[i])) {
            collinear = false;
            break;
        }
    }
    
    if (collinear) {
        string equation = getLineEquation(x[0], y[0], x[1], y[1]);
        cout << equation << endl;
    } else {
        cout << "0" << endl;
    }
    
    return 0;
}
