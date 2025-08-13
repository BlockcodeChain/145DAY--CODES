// : Given a Number N, check whether it is prime or not using Recursion.
#include <iostream>
using namespace std;

bool isPrime(int n, int i) {
    if (n <= 1&&n%i==0) return false;         // Not prime
    if (i == n) return true;          // Reached end → prime
    // if (n % i == 0) return false;     // Divisible → not prime
    return isPrime(n, i + 1);         // Check next number
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (isPrime(n, 2))
        cout << n << " is prime";
    else
        cout << n << " is not prime";
}




// explanation :-
// A number is prime if it is greater than 1 and not divisible by any number from 2 to n-1.

// n → the number you want to check.

// i → the current number you’re checking as a divisor.
// “Start dividing n from 2.
// If anything divides evenly → not prime.
// If you reach n without finding a divisor → prime.
// Recursion just keeps trying the next number until it decides.