[grading_system.cpp](./grading_system.cpp)
// code is correct but not the write way to write , as it will execute all the if statements
// it will take a lot of space and time , hence , we will use else if to check only certain statements
int main() {
    int marks;
    
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks < 25)
        cout << "Grade: F";
    else if (marks <= 44)
        cout << "Grade: E";
    else if (marks <= 49)
        cout << "Grade: D";
    else if (marks <= 59)
        cout << "Grade: C";
    else if (marks <= 79)
        cout << "Grade: B";
    else if (marks <= 100)
        cout << "Grade: A";
    else
        cout << "Invalid marks";

    return 0;
}
