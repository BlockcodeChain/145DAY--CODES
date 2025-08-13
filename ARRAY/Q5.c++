// missing number
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number of elements in array: ";
    cin >> num;
    int array[30];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter " << i + 1 << " Element: ";
        cin >> array[i];
    }
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += array[i];
    }
    cout << sum;
    int n = num + 1; // since one number is missing, total elements should be num+1
    // sum of first n natural numbers formula: n*(n+1)/2
    int totalsum = n * (n + 1) / 2;
    cout << totalsum;
    int result = totalsum - sum;
    cout << "Missing number is: " << result << endl;
}