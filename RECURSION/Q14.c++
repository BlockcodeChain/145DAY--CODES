// sum of square of numbers 
#include <iostream>
using namespace std;

int sumOfSquares(int n) {
    if (n == 0) return 0;           // base case
    return n * n + sumOfSquares(n - 1); // recursion
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of squares from 1 to " << n << " is " << sumOfSquares(n) << endl;
}
