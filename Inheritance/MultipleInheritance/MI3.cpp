// 🔵 Advanced Level – Diamond Problem and Virtual Inheritance

// Problem 3: Intern Details
// Class structure:

// Person (base class): string name

// Student (inherits Person): int rollNumber

// Employee (inherits Person): int empId

// Intern (inherits Student and Employee)

// Task:
// Use virtual inheritance to prevent multiple copies of Person.
// In main(), create an Intern object.
// Set name, rollNumber, and empId, and display all.



#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    void show(){
        cout<<name<<endl;
    }
};
class Student: virtual public Person{
    public:
    int rollnumber;
    void studentinfo(){
        cout<<name<<endl;
        cout<<rollnumber<<endl;
    }
};
class Employee:virtual public Person{
    public:
    int empId;
    void empInfo(){
        cout<<name<<endl;
        cout<<empId<<endl;
    }
};
class Intern: public Student, public Employee{
    public:
    void InternInfo(){
        cout<<name<<endl;
        cout<<rollnumber<<endl;
        cout<<empId<<endl;    }
};

int main(){
 Intern i;
 i.name = "Mrunal";
 i.rollnumber = 253;
 i.empId = 112;
 
 i.InternInfo();
 
    return 0;
}
