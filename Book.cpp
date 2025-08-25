#include <iostream>
using namespace std;
class Book{
  public:
  string title;
  string author;
  void displayInfo()
  {
    cout << "Title: " << title <<endl;
    cout << "Author: " << author <<endl;
  }
};
int main() 
{
  Book book1;
  book1.title = "The master and Magarita";
  book1.author = "Mikhail Bulgakov";
  book1.displayInfo();
  return 0;
}