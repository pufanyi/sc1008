#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

#include "Person.h"
using namespace std;

class Student : public Person {
 protected:
  int studentID;

 public:
  // Constructor declaration
  Student(string n, int a, int id);

  // Function to display student details (redefine base class function)
  virtual void displayInfo() const override;
};

#endif  // STUDENT_H
