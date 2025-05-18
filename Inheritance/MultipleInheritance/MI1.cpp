// 🟢 Basic Level – Multiple Inheritance Without Conflict

// Problem 1: Vehicle Features
// Create two base classes:

// Engine: with a method startEngine()

// Transmission: with a method changeGear()

// Create a derived class Car that inherits both and adds a method drive().

// Expected Output:
// Engine started
// Gear changed
// Car is driving

// Task: Implement this structure using multiple inheritance and call all three methods from the Car object.



#include<iostream>
#include<string>
using namespace std;

class Engine{
    public:
    void startEngine(){
        cout<<"Engine is started "<<endl;
    }
};
 
class Transmission{
    public:
    void changeGear(){
        cout<<"Gear Changed"<<endl;
    }
};

class Car: public Engine, public Transmission{
    public:
    void drive(){
        cout<<"Car is driving"<<endl;
    }
};

int main(){
    
    Car c1;
    c1.startEngine();
    c1.changeGear();
    c1.drive();
    
    return 0;
}