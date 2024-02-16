// Is-a Relationship Example
#include <iostream>
using namespace std;

class Shape{
  public: 
    virtual void draw() const = 0;
};

class Circle : public Shape{
  public:
    void draw() const override{
      // Implmentation for drawing a circle
    }
};

class Square : public Shape{
  public:
    void draw() const override{
      // Implementation for drawing a square
    }
};

int main(){
  return 0;
}