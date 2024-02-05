// constructor must be name as class
// with no return type like: int Book(){}; (wrong)
// assign the value when initialize, and no need to create an extra function to input the member variable.
// constructor must be in public. It errors if no public, Because it is private by default.

#include <iostream>

using namespace std;

class Book {
  public:
    // These are constructors (support overloading: can have multiple constructor as below)
    Book(){ // default constructor

    }

    Book(string title){ // parameterized contructor

    }
    Book(string title, int year){ // parameterized contructor

    }
    Book(string title, string author){ // parameterized contructor

    }

    Book(const Book& other){ // copy constructor

    }
};

class Student {
  public:
    Student(){
      cout << "Hello" << endl;
    }

    Student(string name){
      cout << "Yes, I am " << name << endl;
    }

    Student(string name, int age){
      cout << "My name is " << name << ", and I'm " << age << " years old." << endl;
    }

    void sing(){
      cout << "lalala" << endl;
    }

    void sing(string title){
      cout << "lalala from: " << title << endl;
    }
};

int main(){
  Student andy;
  andy.sing();

  Student jame("jame");

  Student vatana("vatana", 20);
  vatana.sing("happy birthday to you");

  return 0;
}