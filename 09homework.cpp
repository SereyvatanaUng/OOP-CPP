#include <iostream>

using namespace std;

class BankAccount {
  private: 
    int id;
    string name;
    float balance = 0;

  public:
    void setId(int newId){
      id = newId;
    }

    void setName(string newName){
      name = newName;
    }

    void setBalance(float depositBalance){
      if(depositBalance >= 0) {
        balance += depositBalance;
      } else{
        cout << "The balance cannot be smaller than 0" << endl;
        balance = 0.00;
      }
    }

    int getId() const{
      return id;
    }

    string getName() const{
      return name;
    }

    float getBalance() const{
      return balance;
    }

    void withdrawBalance(float withdrawAmount) {
      if (withdrawAmount < 0) {
        cout << "Withdraw amount cannot be smaller than 0" << endl;
      } else if(withdrawAmount > balance) {
        cout << "Insufficient balance for withdrawal!" << endl;
      } else{
        balance -= withdrawAmount;
        cout << "Withdraw Successful!" << endl; 
      }
    }
};

void initialAccount(BankAccount& account);
void depositBalance(BankAccount& account);
void withdrawaBalance(BankAccount& account);
void displayAccount(BankAccount& account);

int main() {
  BankAccount john;

  initialAccount(john);

  cout << "Initial Account Information:" << endl;
  cout << string(30, '-') << endl;
  displayAccount(john);

  depositBalance(john); 
  withdrawaBalance(john); 

  cout << "\nUpdated Account Information: " << endl;
  cout << string(30, '-') << endl;
  displayAccount(john);

  return 0;
}

void initialAccount(BankAccount& account){
  int id;
  string name;

  cout << "enter account no: ";
  cin >> id;
  account.setId(id);

  cout << "enter holder name: ";
  cin >> name;
  account.setName(name);
}

void depositBalance(BankAccount& account){
  float deposit;

  cout << "How much to deposit: $";
  cin >> deposit;
  account.setBalance(deposit);
}

void withdrawaBalance(BankAccount& account){
  float withdraw;

  cout << "How much to withdraw: $";
  cin >> withdraw;
  account.withdrawBalance(withdraw);
}

void displayAccount(BankAccount& account){
  cout << "Account Id: " << account.getId() << endl;
  cout << "Account Holder's Name: " << account.getName() << endl;
  cout << "Account Balance: $" << account.getBalance() << endl;
  cout << string(30, '-') << endl;
}