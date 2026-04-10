#include "Person.h"

#include <iostream>
using namespace std;

// TODO: Implement Person class constructor and function here
Person::Person(string n, int a) : name(std::move(n)), age(a) {}

void Person::displayInfo() const {
  // TODO: Display person's details
  //
  std::cout << "Name: " << this->name << ", Age: " << this->age << std::endl;
}
