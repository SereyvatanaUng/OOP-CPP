// Has-a Relationship Example (Composition)
#include<iostream>
using namespace std;

class Engine{
  public:
    void start() const{
      // Implementation for starting the engine
      cout << "Engine starts!" << endl;
    }
};

class Car{
  public:
    Car(const Engine& engine) : carEngine(engine) {};
    void startCar() const{
      carEngine.start();
      // Other car-related functionalities
      cout << "Now car is starting" << endl;
    }
  private:
    Engine carEngine;
};

int main(){
  Engine myEngine;
  Car myCar(myEngine);

  myCar.startCar();

  return 0;
}