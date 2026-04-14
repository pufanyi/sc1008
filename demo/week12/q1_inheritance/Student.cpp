#include "Student.h"

#include <iostream>
using namespace std;

// TODO: Implement Student class constructor and initialize studentID
Student::Student(string n, int a, int id)
    : Person(std::move(n), a), studentID(id) {}

void Student::displayInfo() const {
  // TODO: Output Student Information
  //
  std::cout << "Name: " << name << ", Age: " << age << std::endl
            << "Student ID: " << studentID << std::endl;
}
