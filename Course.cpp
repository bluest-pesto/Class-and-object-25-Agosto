#include <iostream>
using namespace std;

class Course {
  public:
  string coursename;
  string coursecode;
  int credits;
  void displayInfo()
  {
    cout << "Course name: " << coursename << endl;
    cout << "Course code: " << coursecode << endl;
    cout << "Credits: " << credits << endl;
  }
  bool isHighCredit()
  {
    return credits > 3;
  }
};
int main()
{
  Course course1;
  course1.coursename = "Object oriented programming";
  course1.coursecode = "CSC202";
  course1.credits = 4;
  course1.displayInfo();
  if(course1.isHighCredit())
  {
    cout << "This is a high credit course." << endl;
  } else
  {
    cout << "This is not a high credit course." << endl;
  }
  return 0;
}