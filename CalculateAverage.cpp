//Write a program that asks for a student's name and three quiz marks
#include <iostream>
#include <string>
using namespace std;

// Function to calculate the average
double calculateAvg(double mark1, double mark2, double mark3) {
    return (mark1 + mark2 + mark3) / 3.0;
}

int main() {
    string studentName;
    double mark1, mark2, mark3;
    double average;

    cout << "Enter your name: ";
    getline(cin, studentName);

    cout << "Enter first quiz mark: ";
    cin >> mark1;

    cout << "Enter second quiz mark: ";
    cin >> mark2;

    cout << "Enter third quiz mark: ";
    cin >> mark3;

    average = calculateAvg(mark1, mark2, mark3);

    cout << "Student Name: " << studentName << endl;
    cout << "Quiz 1: " << mark1 << endl;
    cout << "Quiz 2: " << mark2 << endl;
    cout << "Quiz 3: " << mark3 << endl;
    cout << "Average: " << average << endl;

    return 0;
}
