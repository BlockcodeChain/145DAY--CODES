 // power of 4 leetcode
// Given an integer n, return true if it is a power of four. Otherwise, return false.
// An integer n is a power of four, if there exists an integer x such that n == 4x.
#include <iostream>
using namespace std;

bool isPowerOfFour(int n) {
    if (n == 1) return true;        // 4^0 = 1
    if (n <= 0 || n % 4 != 0) return false;  // not divisible by 4 or non-positive
    return isPowerOfFour(n / 4);    // divide by 4 and check again
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // if (isPowerOfFour(n))
    //     cout << n << " is a power of 4";
    // else
    //     cout << n << " is NOT a power of 4";
    cout<<isPowerOfFour(n);
}


// bool isPowerOfK(int num, int k) {
//     if (num == 1) return true;           // k^0 = 1
//     if (num <= 0 || num % k != 0) return false;  // not divisible → not a power
//     return isPowerOfK(num / k, k);       // divide by k and check again
// } for any base (2,3,5)