// factorial of a number using recursion
#include <iostream>
using namespace std;

long long Factorial(int n) {
     if (n < 0) { // check for negative input
  
        return -1;
    }
    if (n == 0 || n == 1) { // base case
        return 1;
    }
    return n * Factorial(n - 1); // recursion
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << Factorial(num) << endl;
}
