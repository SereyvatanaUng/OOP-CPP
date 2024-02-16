#include<iostream>
#include<vector>

using namespace std;

// Employee class
class Employee{
  private:
    string name;
  public:
    // Constructor
    Employee(const string& pName) : name(pName) {}

    // Getter for employee name
    string getName() const{
      return name;
    }
};

// Department class with aggregation relationship
class Department {
  private:
    // Employees are associated with the Department
    vector<Employee*> employees;

  public:
    // Add an employee to the department
    void addEmployee(Employee* employee) {
      employees.push_back(employee);
    }
    // Display details about department and employees
    void displayDetails() const{
      cout << "Department details:" << endl;
      for(const Employee* employee : employees){
        cout << "- Employee: " << employee->getName() << endl;
      }
    }
};

int main() {
  // Create a Department
  Department computerScience;

  // Create employees
  Employee prof1("Dr. Smith");
  Employee prof2("Dr. Johnson");
  Employee prof3("Dr. Patel");

  // Add employees to the Department
  computerScience.addEmployee(&prof1);
  computerScience.addEmployee(&prof2);
  computerScience.addEmployee(&prof3);

  // Display Deparment details
  computerScience.displayDetails();
  return 0;
}