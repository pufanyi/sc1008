#include <iostream>
using namespace std;

union Result {
    int mark;
    char grade; // Can be only 'A', 'B' or 'C'
};

struct Student {
    char studentName[50];
    bool isGrade;
    int finalMark; // Used to store the final mark
    Result res;

    void convertGrade() { // A=90 , B=80, C=60
        // TO-DO: Write your functions here
        //
        //
        //  


    }
};

void displayStudentInfo(Student *students, int count) {
    // TO-DO: Write your functions here
    //
    //
    //


}

int main() {
    // TO-DO: Write your functions here
    //
    //
    //

    return 0;
}

