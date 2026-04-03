#include <iostream>
#include <string>

class Pen {
private:
    std::string color;
    double price;

public:
    Pen(std::string initialColor, double initialPrice) {
        color = initialColor;
        price = initialPrice;
    }

    Pen& setColor(std::string newColor) {
        // TO-DO: Write your code here
        //


    }

    Pen& setPrice(double newPrice) {
        // TO-DO: Write your code here
        //


    }

    void display() const {
        // TO-DO: Write your code here
        //

        
    }
};

int main() {
    // Creating a Pen object and using method chaining
    Pen myPen("Blue", 1.5);
    std::cout<< "The original color and price of the pen: " << std::endl;
    myPen.display();
    
    std::cout<< std::endl<<"The color and price of the pen after setting: " << std::endl;
    myPen.setColor("Red")
         .setPrice(2.0)
         .display();

    return 0;
}
