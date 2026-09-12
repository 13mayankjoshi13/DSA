/*Student Grade

Take marks and use nested if:

Marks ≥ 90 → A
Marks ≥ 75 → B
Marks ≥ 60 → C
Marks ≥ 40 → D
Below 40 →  fail */

#include <iostream>
using namespace std;

int main() {
    int marks;
    cin >> marks;

    if (marks >= 40) {
        // Student has passed

        if (marks >= 90) {
            cout << "Grade A";
        } else if (marks >= 75) {
            cout << "Grade B";
        } else if (marks >= 60) {
            cout << "Grade C";
        } else {
            cout << "Grade D";
        }

    } else {
        cout << "Fail";
    }

    return 0;
}
