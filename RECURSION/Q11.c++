// sum of n number
#include <iostream>
using namespace std;

int Sum(int n) {
    if (n == 0) return 0;       // base case
    return n + Sum(n - 1);      // recursion
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of numbers from 1 to " << n << " is " << Sum(n) << endl;
}
