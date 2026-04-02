#include <iostream>
#include <string>

class Student {
 private:  // TODO: define the private members here
  std::string name;
  int age;
  double gpa;

 public:
  // Constructor
  Student(std::string studentName, int studentAge, double studentGPA) {
    name = studentName;
    age = studentAge;
    gpa = studentGPA;
  }

  // Display function
  void displayDetails() const {
    std::cout << "Student Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "GPA: " << gpa << std::endl;
  }

  // Getters

  // Setters
  // TODO: Implement the setters here
};

int main() {
  // Creating Student objects
  Student student1("Alice", 20, 3.8);
  Student student2("Charlie", 19, 3.5);

  // Display details of students
  std::cout << "Initial Student Details:\n";
  student1.displayDetails();
  std::cout << std::endl;
  student2.displayDetails();
  std::cout << std::endl;

  // Modify student1 details using setters
  student1.setName("Bob");
  student1.setAge(22);
  student1.setGPA(3.9);

  // Display updated details
  std::cout << "Updated Student Details:\n";
  student1.displayDetails();

  return 0;
}
