#include <iostream>
#include <string>
using namespace std;

double calculateRate(double hours, double rate) {
    return (hours * rate);
}

int main() {
    double hours;
    double rate;
    double pay;

    cout << "Enter amount of hours: ";
    cin >> hours;

    cout << "Enter how much you are getting paid per hour: ";
    cin >> rate;

    rate = calculateRate (hours, rate);

    cout << "Expected pay: " << rate << endl;

    return 0;
}
