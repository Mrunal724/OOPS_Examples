// 1. Basic Class Initialization (Person Class)
// Steps:
// Define the class: Create a class named Person.
// Declare member variables: Add private member variables for name (string) and age (int).
// Create constructor: Add a constructor that takes parameters for name and age and initializes them.
// Create a method: Write a method displayDetails() to output the values of name and age.
// Create an object: In the main function, create an object of Person and call the displayDetails() method to print the person's information.


#include<iostream>
#include<string>
using namespace std;

class Person{
  private:
  string name;
  int age;
    
    
    public:
  Person(string name, int age){
        this->name = name;
        this->age = age;
    }
    
    
    void displayDetails(){
        cout<<"The name of person is "<<name<<endl;
        cout<<"The age of the person is "<<age<<endl;
        cout<<"---------------"<<endl;
    }
    
    
};

int main(){
    
    Person p1("Mrunal", 21);
    p1.displayDetails();
    
    Person p2("Prachiti", 22);
    p2.displayDetails();
    
    Person p3("Nisha", 20);
    p3.displayDetails();
    
    return 0;
}