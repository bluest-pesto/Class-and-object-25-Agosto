#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

class Circle {
  public:
  double radius;
  double circumference()
  {
    return 2*M_PI*radius;
  }
  double area()
  {
    return M_PI * radius * radius;
  }
};
int main()
{
  Circle circle1;
  cout << "Nhap ban kinh hinh tron: ";
  cin >> circle1.radius;
  cout <<"Chu vi hinh tron: " << circle1.circumference() << " don vi" << endl;
  cout << "Dien tich hinh tron: " << circle1.area() << " don vi vuong" << endl;
  return 0;
}