#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double balance, totalCost, surcharge, vat, finalCost;
    int unitsUsed;
    char continueChoice;

    do {
        // User inputs
        cout << "Enter your balance (UGX): ";
        cin >> balance;

        // Input validation for balance
        if (balance < 0) {
            cout << "Error: Balance cannot be negative." << endl;
            continue; // Skip to the next iteration
        }

        cout << "Enter the number of water units used: ";
        cin >> unitsUsed;

        // Input validation for units used
        if (unitsUsed < 0) {
            cout << "Error: Number of units cannot be negative." << endl;
            continue; // Skip to the next iteration
        }

        // Calculate the cost based on the number of units used
        double cost = 0.0;

        if (unitsUsed <= 10) {
            cost = unitsUsed * 150;
        } else if (unitsUsed <= 20) {
            cost = (10 * 150) + ((unitsUsed - 10) * 175);
        } else {
            cost = (10 * 150) + (10 * 175) + ((unitsUsed - 20) * 200);
        }

        // Apply surcharge and VAT
        surcharge = cost * 0.15; // 15% surcharge
        totalCost = cost + surcharge;
        vat = totalCost * 0.18; // 18% VAT
        finalCost = totalCost + vat;

        // Check if the user has sufficient balance
        if (balance >= finalCost) {
            balance -= finalCost; // Deduct the final cost from balance
            cout << fixed << setprecision(2);
            cout << "Transaction successful! Remaining balance: " << balance << " UGX." << endl;
        } else {
            cout << "Error: Insufficient balance. Remaining balance before usage: " << balance << " UGX." << endl;
        }

        // Ask user if they want to continue
        cout << "Do you want to perform another transaction? (y/n): ";
        cin >> continueChoice;

    } while (continueChoice == 'y' || continueChoice == 'Y'); // Continue if user inputs 'y' or 'Y'

    cout << "Thank you for using the water billing system!" << endl;

    return 0;
}
