#include "Student.h"
#include <iostream>
using namespace std;

int main() {
    Student s1("Alice", 20, 12345);
    s1.displayInfo();
    cout<<endl;

    // Base class pointer points to the derived class object
    Person* p = &s1;
    p->displayInfo();
    
    return 0;
}