// 🧪 Practice Problem: Vehicle Sound System

// 📝 Problem Statement:

// Create a base class Vehicle with a function honk(). Then create two derived classes: Car and Bike. Each derived class should override the honk() function to print a sound specific to that vehicle.

// Your task is to:
// Define the base class Vehicle with a function honk().

// Define the derived classes Car and Bike.
// Override the honk() function in both.

#include<iostream>
#include<string>
using namespace std;

class Vehicle{
    public:
    virtual void honk(){
        cout<<"Honking"<<endl;
    }
};
class Car: public Vehicle{
    public:
    void honk() override {
        cout<<"Honking by Car"<<endl;
    }
};
class Bike: public Vehicle{
    public:
    void honk() override{
        cout<<"Honking by Bike"<<endl;
    }
};

int main(){
  
  Vehicle v;
  v.honk();
  cout<<endl;

  
  Car c;
  c.honk();
  cout<<endl;

  
  Bike b;
  b.honk();

  
    
    return 0;
}
