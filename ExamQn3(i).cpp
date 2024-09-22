#include <iostream>
#include <iomanip>

using namespace std;

// Function to calculate the total water bill
double calculateWaterBill(int units) {
    double cost = 0.0;

    if (units <= 10) {
        cost = units * 150; // First 10 units
    } else if (units <= 20) {
        cost = (10 * 150) + ((units - 10) * 175); // Next 10 units
    } else {
        cost = (10 * 150) + (10 * 175) + ((units - 20) * 200); // Beyond 20 units
    }

    return cost;
}

// Function to apply surcharge and VAT
double applyCharges(double totalCost) {
    double surcharge = totalCost * 0.15; // 15% surcharge
    double vat = totalCost * 0.18; // 18% VAT
    return totalCost + surcharge + vat; // Total cost including charges
}

int main() {
    double loadedAmount;
    int waterUnits;
    char choice;

    do {
        // Prompt user for input
        cout << "Enter the amount of money loaded onto your account (UGX): ";
        cin >> loadedAmount;
        
        cout << "Enter the number of water units consumed: ";
        cin >> waterUnits;

        // Calculate the total water bill
        double totalCost = calculateWaterBill(waterUnits);
        
        // Apply surcharge and VAT
        double finalAmount = applyCharges(totalCost);

        // Check if the user has sufficient balance
        if (finalAmount > loadedAmount) {
            cout << "Error: Insufficient balance." << endl;
            cout << "Remaining balance before usage: " << loadedAmount << " UGX" << endl;
        } else {
            // Deduct from balance and show remaining balance
            loadedAmount -= finalAmount;
            cout << fixed << setprecision(2);
            cout << "Total water bill: " << totalCost << " UGX" << endl;
            cout << "Final amount after charges: " << finalAmount << " UGX" << endl;
            cout << "Remaining balance after usage: " << loadedAmount << " UGX" << endl;
        }

        // Ask if the user wants to make another transaction
        cout << "\nDo you want to make another transaction? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y'); // Continue if user chooses 'y' or 'Y'

    cout << "Thank you for using the water billing system!" << endl;

    return 0;
}
