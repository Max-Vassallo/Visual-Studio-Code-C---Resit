#include <iostream>
#include <string>
using namespace std;

int main () {
    string name;

    cout <<"Please enter your name" << endl;
    getline(cin, name);

    cout << "Nice to meet you, " << name << "!" << endl;

    return 0;
}