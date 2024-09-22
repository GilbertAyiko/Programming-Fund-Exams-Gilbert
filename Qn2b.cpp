#include <iostream>
using namespace std;

// Function to find the third angle of a triangle
int findThirdAngle(int angle1, int angle2) {
    return 180 - (angle1 + angle2);  // The sum of the angles in a triangle is always 180
}

int main() {
    int angle1, angle2;

    // Input two angles from the user
    cout << "Enter the first angle of the triangle: ";
    cin >> angle1;
    cout << "Enter the second angle of the triangle: ";
    cin >> angle2;

    // Find and display the third angle
    int thirdAngle = findThirdAngle(angle1, angle2);
    cout << "The third angle of the triangle is: " << thirdAngle << " degrees" << endl;

    return 0;
}

