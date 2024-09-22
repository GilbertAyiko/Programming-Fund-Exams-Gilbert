#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Please enter your name: ";
    getline(cin, name); 

    cout << "My Name is, " << name << "!" << endl; 
    return 0;
}
