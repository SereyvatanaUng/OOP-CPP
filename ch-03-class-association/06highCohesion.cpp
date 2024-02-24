// Low Cohesion bad, High Cohesion good
#include <iostream>

using namespace std;

class InOutput {
  private:
    int x;
  public:
    int input() {
      cout << "Enter an integer: ";
      cin >> x;
      return x;
    }
    void display(float result) {
      cout << "Result is " << result << endl;;
    }

    void displayError() {
      cout << "Display if any error" << endl;
    }
};


class Multiplier {
  private:
    int result, a, b;
  public:

    float compute(int a, int b) {
      return result = a * b;
    }
};

class Addition {
  private:
    int result, a, b;
  public:

    float compute(int a, int b) {
      return result = a + b;
    }
};

class Division {
  private:
    int result, a, b;
  public:

    float compute(int a, int b) {
      return result = a / b;
    }
};

int main() {
  Multiplier multiply;
  InOutput io;
  int x, y;
  float result;
  
  x = io.input();
  y = io.input();
  result = multiply.compute(x, y);
  io.display(result);

  Division devide;
  x = io.input();
  y = io.input();
  result = devide.compute(x, y);
  io.display(result);
  return 0;
}
