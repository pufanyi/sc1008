#include <iostream>
using namespace std;

union Result {
  int mark;
  char grade;  // Can be only 'A', 'B' or 'C'
};

struct Student {
  char studentName[50];
  bool isGrade;
  int finalMark;  // Used to store the final mark
  Result res;

  void convertGrade() {  // A=90 , B=80, C=60
    if (isGrade) {
      if (res.grade == 'A') {
        finalMark = 90;
      } else if (res.grade == 'B') {
        finalMark = 80;
      } else {
        finalMark = 60;
      }
    } else {
      finalMark = res.mark;
    }
  }
};

void displayStudentInfo(Student* students, int count) {
  double sum = 0;
  for (int i = 0; i < count; ++i) {
    std::cout << "Name: " << students[i].studentName << ", Final Mark: " << students[i].finalMark << std::endl;
    sum += students[i].finalMark;
  }
  double average = sum / count;
  std::cout << std::endl;
  std::cout << "Average Final Mark: " << average << std::endl;
}

int main() {
  std::cout << "How many students do you want to input?" << std::endl;
  int numStudents;
  std::cout << "Enter student size: ";
  std::cin >> numStudents;

  Student *students = new Student[numStudents];
  
  for (int i = 0; i < numStudents; ++i) {
    std::cin.get();
    std::cout << "Enter student name: ";
    std::cin.getline(students[i].studentName, 50);
    std::cout << "Enter 'G' if result is grade or 'M' if result is mark: ";
    char gOrM;
    std::cin >> gOrM;
    if (gOrM == 'G') {
      std::cout << "Enter grade (A,B,C): ";
      std::cin >> students[i].res.grade;
      students[i].isGrade = true;
    } else {
      std::cout << "Enter mark (0-100): ";
      std::cin >> students[i].res.mark;
      students[i].isGrade = false;
    }
    students[i].convertGrade();
  }

  displayStudentInfo(students, numStudents);
  
  delete[] students;

  return 0;
}
