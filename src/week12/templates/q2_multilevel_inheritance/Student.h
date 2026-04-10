#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

#include "Person.h"
using namespace std;

class Student : public Person {
 private:
  int studentID;

 public:
  // Constructor declaration
  Student(string n, int a, int id);

  // Function to display student details (redefine base class function)
  void displayInfo() const;
};

#endif  // STUDENT_H