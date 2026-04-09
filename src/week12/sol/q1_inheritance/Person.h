#pragma once
#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
protected:
    // TODO: Define the member variables (name and age, which are string and integer)
    //

public:
    // Constructor declaration
    Person(string n, int a);

    // Function to display person details
    void displayInfo() const;
};

#endif // PERSON_H