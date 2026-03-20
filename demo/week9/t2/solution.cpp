#include <iostream>

int main() {
  int choice;

  while (true) {
    // Display menu options
    std::cout << "\nChoose an option:\n";
    std::cout << "1 - Square\n";
    std::cout << "2 - Rectangle\n";
    std::cout << "3 - Trapezoid\n";
    std::cout << "Other - Exit\n";
    std::cout << "Enter your choice (int): ";
    std::cin >> choice;

    if (choice == 1) {
      // Square
      int side;
      std::cout << "Enter the side length of the square (int): ";
      std::cin >> side;
      std::cout << "Area of Square: " << calArea(side) << std::endl;
    } else if (choice == 2) {
      // Rectangle
      int length, width;
      std::cout << "Enter the length and width of the rectangle (int): ";
      std::cin >> length >> width;
      std::cout << "Area of Rectangle: " << calArea(length, width) << std::endl;
    } else if (choice == 3) {
      // Trapezoid
      int base1, base2, height;
      std::cout << "Enter the two bases and height of the trapezoid (int): ";
      std::cin >> base1 >> base2 >> height;
      std::cout << "Area of Trapezoid: " << calArea(base1, base2, height)
                << std::endl;
    } else {
      // Exit program
      std::cout << "Exiting program..." << std::endl;
      break;
    }
  }

  return 0;
}
