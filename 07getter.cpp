#include <iostream>

using namespace std;

class Person{
  private:
    string name = "John";
    int age = 20;
  public:

    // read only function
    string getName() const {
      return name;
    }
    int getAge() const{
      return age;
    }
};

int main(){
  Person john;
  cout << john.getName() << john.getAge() << endl;
  return 0;
}