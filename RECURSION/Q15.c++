// sum of cube of numbers 
#include <iostream>
using namespace std;

int sumOfCube(int n) {
    if (n == 0) return 0;           // base case
    return n * n*n + sumOfCube(n - 1); // recursion
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum ofcube from 1 to " << n << " is " << sumOfCube(n) << endl;
}
