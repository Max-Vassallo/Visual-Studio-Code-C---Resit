//Read a quantity and a unit price. Call a function to calculate the total cost. Print the result
#include <iostream>
#include <iomanip>
using namespace std;

double calculateTotal(int quantity, double unitPrice) {
    return quantity * unitPrice;
}

int main() {
    int quantity;
    double unitPrice;

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter unit price: ";
    cin >> unitPrice;

    double total = calculateTotal(quantity, unitPrice);

    cout << "Total cost: " << total << endl;

    return 0;
}
