// 🔸 Practice Exercise: Inheritance in C++
// 🧩 Problem Statement:
// Create a program to model the following scenario using inheritance:

// There is a base class Person with:
// Data members: name, age
// Member function: displayInfo()

// Create a derived class Student that inherits from Person, and adds:
// Data member: rollNumber
// Member function: displayStudentInfo()

// Create a derived class Teacher that inherits from Person, and adds:
// Data member: subject
// Member function: displayTeacherInfo()

// 🔹 Requirements
// Use constructor chaining (call base class constructor from derived class)
// Demonstrate inheritance by creating both Student and Teacher objects in main()
// Reuse displayInfo() from base class inside derived class methods

// 🧾 Expected Output:

// Name: Mrunal
// Age: 21
// Roll Number: 1001

// Name: Shweta
// Age: 35
// Subject: Physics




#include<iostream>
#include<string>
using namespace std;

class Person{
  public:
  string name;
  int age;
  
  void displayInfo(){
      cout<<name<<endl;
      cout<<age<<endl;   
  }
};

class Student : public Person{
  public:
  int rollnumber;
  
  void displayStudentInfo(){
      cout<<name<<endl;
      cout<<age<<endl;
      cout<<rollnumber<<endl;
  }
};

class Teacher : public Person{
    public:
    string subject;
    
    void displayTeacherInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<subject<<endl;
    }
    
    
};


int main(){
    
    Student S1;
    S1.name = "Mrunal";
    S1.age = 21;
    S1.rollnumber = 1001;
    
    
    S1.displayStudentInfo();
    
    Teacher T1;
    T1.name = "Shweta";
    T1.age = 35;
    T1.subject = "Physics";
    
    T1.displayTeacherInfo();
    
    
    return 0;
}