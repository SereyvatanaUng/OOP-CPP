#include<iostream>

using namespace std;

class Animal {
public:
    string name;
    int age;

	void getName(){
		cout << "Name: " << name << endl;
	}

	void getAge(){
		cout << name << " is " << age << " years old" << endl;
	}

	void runAt(string place){
		cout << name <<" runs at " << place << endl;
	}

	void bark(string stranger){
		cout << name <<" barks at " << stranger << endl;
	}
};


int main(){
	Animal myPet;
	Animal yourPet;

	myPet.name = "Chali";
	myPet.age = 10;

	myPet.getName();
	myPet.getAge();
	myPet.runAt("Wat phnom");

	yourPet.name = "Chakriya";
	yourPet.age = 1;

	yourPet.getName();
	yourPet.getAge();
	yourPet.runAt("Koh pich");
	return 0;
}