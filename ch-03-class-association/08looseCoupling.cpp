// Tight Coupling bad, Loose Coupling good

// Loose Coupling Example: Rectangle and AreaCalculator classed with dependency injection

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
    Rectangle(double length, double width, const AreaCalculator& areaCalculator) : length(length), width(width), areaCalculator(areaCalculator){}
    
    double calculateArea() const{
      // Loose coupling: Use the injected AreaCalculator instance of calclate the area
      return areaCalculator.calculateArea(length, width);
    }

  private:
    double length, width;
    const AreaCalculator& areaCalculator;
};


int main() {
  AreaCalculator areaCalculator;
  Rectangle myRectangle(5.0, 3.0, areaCalculator);
  double area = myRectangle.calculateArea();
  cout << "Rectangle Area: " << area << endl;
  return 0;
}