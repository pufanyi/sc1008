#include <iostream>

class Box {
 private:
  double length;
  double width;
  double height;

 public:
  // Constructor to initialize the box dimensions
  Box(double l, double w, double h) {
    length = l;
    width = w;
    height = h;
  }

  // Member function that can access the private members
  void calculateVolume() {
    // Caclulate and display the volume of the box
    std::cout << "Box Volume: " << length * width * height << " cubic units" << std::endl;
  }

  // Declare a friend function to display private members
  friend void displayDimensions(const Box& box);
};

// Define the friend function (that can access private members of Box)
void displayDimensions(const Box& box) {
  std::cout << "Box Dimensions: " << std::endl;
  std::cout << "Length: " << box.length << std::endl;
  std::cout << "Width: " << box.width << std::endl;
  std::cout << "Height: " << box.height << std::endl;
}

int main() {
  // Creating a Box object
  Box myBox(5.0, 3.0, 2.0);

  // Friend function accessing private data
  displayDimensions(myBox);

  // Member function accessing private data
  myBox.calculateVolume();

  return 0;
}
