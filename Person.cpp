#include <iostream>
using namespace std;

class Person {
  public:
    string name;
    string address;
    int age;

    void displayInfo() {
      cout << "Name : " << name << endl;
      cout << "Age : " << age << endl;
      cout << "Address     : " << address << endl;
    }

    bool isAdult() {
      return age >= 18;
    }
};

int main() {
  Person person1;
  person1.name = "John Doe";
  person1.address = "123 Main St";
  person1.age = 20;

  person1.displayInfo();

  if (person1.isAdult()) {
    cout << "This person is an adult." << endl;
  } else {
    cout << "This person is not an adult." << endl;
  }

  return 0;
}
