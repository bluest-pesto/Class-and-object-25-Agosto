#include<iostream>
using namespace std;
class Laptop{
  public:
  string brand;
  string model;
  int ram;
  int storage;
  void displayInfo()
  {
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "RAM: " << ram << endl;
    cout << "Storage: " << storage << "GB" << endl;
  }
  void checkRAM(int requiredRAM)
  {
    if(ram >= requiredRAM)
    {
      cout << "This laptop has enough RAM to run the software." << endl;
    }
    else
    {
      cout << "This laptop does not have enough RAM to run the software." << endl;
    }
  }
};
int main()
{
  Laptop laptop1;
  laptop1.brand = "Dell";
  laptop1.model = "XPS 13";
  laptop1.ram = 8;
  laptop1.storage = 256;
  laptop1.displayInfo();
  laptop1.checkRAM(16);
  return 0;
}