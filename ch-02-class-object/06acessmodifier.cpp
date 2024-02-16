#include <iostream>
using namespace std;

class Father{
  // Member variables - should be set as 'private'
  protected: 
    string sportCar = "Lambo";
    string sportBike = "BMW GS1200";
  
  // Member function 
  public:
    void driveCar(){
      cout << "Driving " << sportCar << endl;
    }
  
    void rideBike(){
      cout << "Riding " << sportBike << endl;
    }
  
};

// : means extend
class Child : protected Father {
  public:
    void driveCar() {
      cout << "Driving " << sportCar << endl;
    }
};

class GrandChild : public Child {
  public:
    void driveCar() {
      cout << "Driving " << sportCar << endl;
    }
};

int main(){
  Father john;
  john.driveCar();

  Child chenda;
  chenda.driveCar();

  GrandChild pisal;
  pisal.driveCar();
  return 0;
}