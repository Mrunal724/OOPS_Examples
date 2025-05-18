//  Problem Statement:
// Create a multilevel class hierarchy to represent the following:

// Class 1: Person
// Data members: name, age
// Method: displayPersonInfo()

// Class 2: Employee (inherits from Person)
// Data member: employeeId
// Method: displayEmployeeInfo()

// Class 3: Manager (inherits from Employee)
// Data member: department
// Method: displayManagerInfo()

// In main(), create an object of class Manager and display all details.


#include<iostream>
#include<string>
using namespace std;

class Person{
  public:
  string name;
  int age;
  
  void displayPersonInfo(){
      cout<<name<<endl;
      cout<<age<<endl;
  }
};

class Employee: public Person{
    public:
    int employeeID;
    
    void displayEmployeeInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<employeeID<<endl;
    }
    
};

class Manager : public Employee{
    public: 
    string department;
    
    void displayManagerInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<employeeID<<endl;
        cout<<department<<endl;
    }
};

int main(){
 
 Manager M1;
 M1.name = "Mrunal";
 M1.age = 21;
 M1.employeeID = 253;
 M1.department = "FullStack WEB";
 
 
 M1.displayManagerInfo();
    
    return 0;
}
