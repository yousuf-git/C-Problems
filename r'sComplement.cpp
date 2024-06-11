#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n,number, base;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the base (r): ";
    cin >> base;
    cout << "Enter Number of digits: ";
    cin >>n;

    int complement = pow(base, n) - number;
    cout << "The " << base << "'s complement of " << number << " is " << complement << endl;

    return 0;
}

