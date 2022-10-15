#include <iostream>
using namespace std;

int KeyboardInput() {
    string input;
    
    cout << "Enter keyboard input: ";
    
    // Taking keybaord input
    cin >> input;
    
    // Pring inserted value
    cout << "Inserted value: " << input;
    
    return 0;
}