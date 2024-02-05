#include<iostream>

using namespace std;

long long factorial(int num);

int main(){
  int number;

  cout << "Enter a positive integer: ";
  cin >> number;

  cout << "Factorial of " << number << " is: " << factorial(number);

  return 0;
}

long long factorial(int num){
  if (num == 0){
    return 1;
  }
  else {
    return num * factorial(num - 1);
  }
};
