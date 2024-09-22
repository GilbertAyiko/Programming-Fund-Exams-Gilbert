#include <iostream>
using namespace std;

bool is_leap_year(unsigned int Y) {
    if (Y % 100 == 0) {
        return (Y % 400 == 0);
    } else {
        return (Y % 4 == 0);
    }
}

int main() {
    unsigned int year;
    char choice;

    do {
        cout << "Enter a year: ";
        cin >> year;

        if (is_leap_year(year)) {
            cout << year << " is a leap year." << endl;
        } else {
            cout << year << " is not a leap year." << endl;
        }

        cout << "Do you want to check another year? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
