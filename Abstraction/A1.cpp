// 🧪 Practice Problem: Employee Payment System

// 📝 Problem Statement:
// Design an abstract base class called Employee with a pure virtual function calculateSalary(). Then create two derived classes:
// FullTimeEmployee (with basicSalary)
// PartTimeEmployee (with hoursWorked and hourlyRate)
// Each derived class should override the calculateSalary() function to display the salary based on its logic.

// 🔧 Requirements:
// Use a base class pointer to access derived class methods.
// Demonstrate abstraction by hiding the salary calculation logic behind a common interface.



#include<iostream>
#include<string>
using namespace std;

//ABSTRACT CLASS 
class Employee{
    public:
    virtual void calculateSalary() = 0;
};
 
class FullTimeEmployee : public Employee{
    public:
    void calculateSalary(){
        cout<<"with basicSalary"<<endl;
    }
};

class PartTimeEmployee : public 
Employee{
    public:
    void calculateSalary(){
        cout<<"with hoursWorked and hourlyRate"<<endl;
    }
};


int main(){
    PartTimeEmployee p;
    p.calculateSalary();
    
    FullTimeEmployee f;
    f.calculateSalary();
    
    return 0;
}
