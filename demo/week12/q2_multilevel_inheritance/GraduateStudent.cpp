#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

// TODO: Update your implementation for Student Class and Person Class in
// Question 1
//       Declare displayInfo() as virtual

// Derived class: GraduateStudent (inherits from Student)
class GraduateStudent : public Student {
 private:
  // TODO: Define the additional attribute (researchTopic)
  std::string researchTopic;

 public:
  // TODO: Implement the Constructor
  GraduateStudent(string n, int a, int id, string topic)
    : Student(std::move(n), a, id), researchTopic(std::move(topic)) {}

  // TODO: Implement displayInfo() (Note: it is virtual function in Student)

  virtual void displayInfo() const override {
    std::cout << "Name: " << this->name << ", Age: " 
      << this->age << ", Student ID: " << this->studentID 
      << ", Research Topic: " << researchTopic << std::endl;
  }
};

int main() {
  GraduateStudent gs1("Alice", 25, 56789, "Machine Learning");
  gs1.displayInfo();
  cout << endl;

  Student* stu = &gs1;
  stu->displayInfo();
  cout << endl;

  Person* per = &gs1;
  per->displayInfo();

  return 0;
}
