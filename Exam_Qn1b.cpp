#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    
    int numerator = 1;
    int denominator = 3;
    double sum = 0.0; 

    
    while (numerator <= 95 && denominator <= 97) {
        sum += static_cast<double>(numerator) / denominator; 
        
        
        numerator += 2;
        denominator += 2;
    }

    
    cout << fixed << setprecision(6); 
    cout << "The sum of the series is: " << sum << endl;

    return 0;
}

