#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
using namespace std;

class Student : public Person {
private:
    // TODO: Define the additional attribute (studentID), studentID is an integer
    // 

public:
    // Constructor declaration
    Student(string n, int a, int id);

    // Function to display student details (redefine base class function)
    void displayInfo() const;
};

#endif // STUDENT_H