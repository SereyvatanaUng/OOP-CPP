#include<iostream>

using namespace std;

class ExchangeConvertor {
private:
public:
	float rate;
	float exchange(float amount);
	float setRate(float exRate){
		return rate = exRate;
	};
};

class Student {
public:
	void exchange();
};

float ExchangeConvertor::exchange(float amount) {
	return amount * rate;
};

void Student::exchange() {
	cout << "I am from Student class";
};

void exchange(){
	cout << "I do gift exchange";
};

int main(){
	ExchangeConvertor exKHR;
	// exKHR.rate = 4000;
	exKHR.setRate(4000);
	float exValue = exKHR.exchange(100);
	cout << "Amount in KHR: " << exValue;
	
	return 0;
};