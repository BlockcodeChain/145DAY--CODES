// fibonaaci seeries
// This program generates the Fibonacci series up to a specified number of elements.
#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number of elements in Fibonacci series: ";
    cin >> num;

    if (num < 1) {
        cout << "Number of elements must be at least 1." << endl;
        return 0;
    }

    int array[30];

    // First two terms
    array[0] = 0;
    if (num > 1) {
        array[1] = 1;
    }

    // Calculate Fibonacci values
    for (int i = 2; i < num; i++) {
        array[i] = array[i - 1] + array[i - 2];
    }

    // Print the series
    cout << "Fibonacci series: ";
    for (int i = 0; i < num; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
