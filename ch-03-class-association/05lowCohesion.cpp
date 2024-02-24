// Low Cohesion bad, High Cohesion good
#include <iostream>

using namespace std;

class Multiplier {
  private:
    int result, a, b;

  public:
    void input() {
      cout << "enter two numbers: ";
      cin >> a >> b;
    }

    void compute() {
      result = a * b;
    }

    void display() {
      cout << "Result of operation is " << result << endl;
    }
};

class Addition {
  private:
    int result, a, b;

  public:
    void input() {
      cout << "enter two numbers: ";
      cin >> a >> b;
    }

    void compute() {
      result = a + b;
    }

    void display() {
      cout << "Result of operation is " << result << endl;
    }
};

class Division {
  private:
    int result, a, b;

  public:
    void input() {
      cout << "enter two numbers: ";
      cin >> a >> b;
    }

    void compute() {
      result = a / b;
    }

    void display() {
      cout << "Result of operation is " << result << endl;
    }
};

int main() {
  Multiplier multiply;
  multiply.input();
  multiply.compute();
  multiply.display();

  Addition add;
  add.input();
  add.compute();
  add.display();

  return 0;
}