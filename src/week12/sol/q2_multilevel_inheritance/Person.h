#pragma once
#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
 protected:
  std::string name;
  int age;

 public:
  // Constructor declaration
  Person(string n, int a);

  // Function to display person details
  virtual void displayInfo() const;
};

#endif  // PERSON_H
