// Tight Coupling bad, Loose Coupling good

// Tight Coupling Example: Rectangle and AreaCalculator classed with direct dependency

#include <iostream>

using namespace std;

class AreaCalculator {
  public:
    double calculateArea(double length, double width) const {
      return length * width;
    }
};

class Rectangle {
  public:
    Rectangle(double length, double width): length(length), width(width){}
    // Tight coupling: Direct dependency on AreaCalculator class
    double calculateArea() const{
      AreaCalculator areaCalculator;
      return areaCalculator.calculateArea(length, width);
    }

  private:
    double length, width;
};


int main() {
  AreaCalculator areaCalculator;
  Rectangle myRectangle(5.0, 3.0);
  // Tight coupling: Rectangle class relies on internally created AreaCalculator instance
  double area = myRectangle.calculateArea();
  cout << "Rectangle Area: " << area << endl;
  return 0;
}