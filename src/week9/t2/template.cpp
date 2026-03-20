#include <iostream>
using namespace std;

// TO-DO: Write your functions here
//
//
//



int main() {
    int choice;
    
    while (true) {
        // Display menu options
        cout << "\nChoose an option:\n";
        cout << "1 - Square\n";
        cout << "2 - Rectangle\n";
        cout << "3 - Trapezoid\n";
        cout << "Other - Exit\n";
        cout << "Enter your choice (int): ";
        cin >> choice;

        if (choice == 1) {
            // Square
            int side;
            cout << "Enter the side length of the square (int): ";
            cin >> side;
            cout << "Area of Square: " << calArea(side) << endl;
        } 
        else if (choice == 2) {
            // Rectangle
            int length, width;
            cout << "Enter the length and width of the rectangle (int): ";
            cin >> length >> width;
            cout << "Area of Rectangle: " << calArea(length, width) << endl;
        } 
        else if (choice == 3) {
            // Trapezoid
            int base1, base2, height;
            cout << "Enter the two bases and height of the trapezoid (int): ";
            cin >> base1 >> base2 >> height;
            cout << "Area of Trapezoid: " << calArea(base1, base2, height) << endl;
        } 
        else {
            // Exit program
            cout << "Exiting program..." << endl;
            break;
        }
    }
    
    return 0;
}
