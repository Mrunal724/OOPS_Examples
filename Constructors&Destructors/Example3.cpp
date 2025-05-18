// 🔸 Practice Exercise: Encapsulation in C++
// 🧩 Problem Statement:
// Create a Student class that encapsulates the following information:

// name (string)

// rollNumber (int)

// marks (float)

// The data should be private, and access to it should only be allowed via public getter and setter methods.

// Add the following functionality:

// A method displayInfo() to print student details.

// A method to validate that marks should be between 0 and 100 only.

// 🧾 Requirements:
// Use private variables.

// Use public set and get methods.

// Validate input while setting values.

// Demonstrate usage in main().

// 🔹 Sample Output:
//
// Name: Mrunal
// Roll Number: 12
//Marks: 87.5






#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
    string name;
    int rollnumber;
    float marks;
    
    public:
    void setinfo(string name, int rollnumber, float marks){
        this->name = name;
        this->rollnumber = rollnumber;
        this->marks = marks;
    }
    
    
    void displayInfo(){
        cout<<"The name is "<<name<<endl;
        cout<<"The rollnumber is "<<rollnumber<<endl;
        cout<<"The marks are "<<marks<<endl;
        cout<<"--------------------"<<endl;
    }
    
    
};



int main(){
    
  Student S1;
  S1.setinfo("Mrunal", 253, 97.33);
  
  Student S2;
  S2.setinfo("Prachiti", 114, 98.99);
  
  S1.displayInfo();
  
  S2.displayInfo();
  
  
  return 0;
}