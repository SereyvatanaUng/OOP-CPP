#include <iostream>

using namespace std;

class Student {
  private:
    string name;
    int age;

  public:

    Student(string name, int age){
      if (age < 18) {
        cout << "Student must be over 18";
      }
      else {
        this->name = name;
        this->age = age;
      }
    }

    // or write this if you don't modify the values.
    // Student(string n, int a) : name(n), age(a) { }

    void sayHi() {
      cout << "I'm " << name << ", I'm " << age << endl;
    }
};

class Division {
  public:
  Division(float a, float b) {
    if (b == 0) {
      cout << "cannot divide" << endl;
    }
    else {
      cout << "result is: " << a/b << endl;
    }
  }
};

int main() {
  Student vatana("Vatana", 20);
  vatana.sayHi();

  Division div(10, 2.5);
  return 0;
}