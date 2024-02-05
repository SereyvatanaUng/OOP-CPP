#include <iostream>

using namespace std;

class Registration {
  private:
    string name;
    int age;

  public:
    void setName(string newName){
      name = newName;
    }
    
    void setAge(int newAge){
      if (age < 18) {
        cout << "Not eligible" << endl;
      } else {
        age = newAge;
      }
    }

    string getName() const{
      return name;
    }

    int getAge() const{
      return age;
    }
};

int main(){

  Registration john;
  john.setName("John");
  john.setAge(10);

  cout << john.getName() << john.getAge() << endl;
  return 0;
}