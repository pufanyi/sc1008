#include <iostream>
#include <string>
using namespace std;

// Template class for storing exam results of different data types
template <typename T>
class ExamResult {
 private:
  T* result;  // Pointer to dynamically allocated array of exam results
  int size;   // Number of exam results

 public:
  // Default constructor
  ExamResult() : result(nullptr), size(0) {}

  ExamResult(const ExamResult& other) {
    size = other.size;
    if (size > 0) {
      result = new T[size];
      for (int i = 0; i < size; ++i) {
        result[i] = other.result[i];
      }
    } else {
      result = nullptr;
    }
  }

  ExamResult& operator=(const ExamResult& other) {
    if (this == &other) {
      return *this;
    }
    size = other.size;
    if (size > 0) {
      result = new T[size];
      for (int i = 0; i < size; ++i) {
        result[i] = other.result[i];
      }
    } else {
      result = nullptr;
    }
    return *this;
  }

  void setExamResult(T* array, int len) {
    if (result != nullptr) {
      delete[] result;
    }

    result = new T[len];
    size = len;
    for (int i = 0; i < size; ++i) {
      result[i] = array[i];
    }
  }

  void updateResultAtOneLoc(int i, const T& newResult) {
    if (i < 0 || i >= size) {
      std::cerr << "Out of range" << std::endl;
      return;
    }
    this->result[i] = newResult;
  }

  void printExamResult() const {
    if (result == nullptr) {
      std::cout << "No results" << std::endl;
      return;
    }
    for (int i = 0; i < size; ++i) {
      if (i != 0) {
        std::cout << ' ';
      }
      std::cout << result[i];
    }
    std::cout << std::endl;
  }

  ~ExamResult() {
    if (result != nullptr) {
      delete[] result;
    }
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
  cout << endl;

  int intScores2[] = {100, 99};
  intExam.setExamResult(intScores2, 2);
  intExam.printExamResult();
  cout << endl;

  // Test with letter grades
  string letterGrades[] = {"A", "B", "C", "D"};
  ExamResult<string> stringExam;
  stringExam.setExamResult(letterGrades, 4);
  stringExam.printExamResult();
  stringExam.updateResultAtOneLoc(3, "A+");
  stringExam.printExamResult();
  cout << endl;

  // Test with boolean pass/fail results
  cout << boolalpha;  // Enables printing "true" and "false"
  bool passFail[] = {true, false, true};
  ExamResult<bool> boolExam;
  boolExam.setExamResult(passFail, 3);
  boolExam.printExamResult();
  boolExam.updateResultAtOneLoc(0, false);
  boolExam.printExamResult();

  return 0;
}
