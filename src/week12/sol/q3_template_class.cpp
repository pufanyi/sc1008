#include <iostream>
#include <string>
using namespace std;

// Template class for storing exam results of different data types
template <typename T>
class ExamResult {
private:
    T* result; // Pointer to dynamically allocated array of exam results
    int size;  // Number of exam results

public:
    // Default constructor
    ExamResult() : result(nullptr), size(0) {}

    void setExamResult(T* array, int len) {
        // TO-DO: Set the exam result as the input array
        //

    }


    void updateResultAtOneLoc(int i, const T &newResult) {
        // TO-DO: Update the exam result at i-th location to new result
        //
        //


    }


    void printExamResult() const {
        // TO-DO: Print all exam results
        //

    }

    
    ~ExamResult() {
        // TO-DO: Destructor to free allocated memory
        //

    }
};


int main() {
    // Test with integer scores
    int intScores[] = {80, 90, 75, 85};
    ExamResult<int> intExam;
    intExam.setExamResult(intScores, 4);
    intExam.printExamResult();
    intExam.updateResultAtOneLoc(2, 95);
    intExam.printExamResult();
    cout<<endl;

    int intScores2[] = {100, 99};
    intExam.setExamResult(intScores2, 2);
    intExam.printExamResult();
    cout<<endl;
    
    // Test with letter grades
    string letterGrades[] = {"A", "B", "C", "D"};
    ExamResult<string> stringExam;
    stringExam.setExamResult(letterGrades, 4);
    stringExam.printExamResult();
    stringExam.updateResultAtOneLoc(3, "A+");
    stringExam.printExamResult();
    cout<<endl;
    
    // Test with boolean pass/fail results
    cout << boolalpha; // Enables printing "true" and "false"
    bool passFail[] = {true, false, true};
    ExamResult<bool> boolExam;
    boolExam.setExamResult(passFail, 3);
    boolExam.printExamResult();
    boolExam.updateResultAtOneLoc(0, false);
    boolExam.printExamResult();
    
    return 0;
}