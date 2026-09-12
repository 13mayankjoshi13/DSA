//Write a program that checks whether a number is positive, negative, or zero. If it is positive, use a nested if to check whether it is even or odd.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 0) {
        if (n % 2 == 0) {
            cout << "Positive Even";
        } else {
            cout << "Positive Odd";
        }

    } else if (n < 0) {
        cout << "Negative";

    } else {
        cout << "Zero";
    }
    return 0;
}
