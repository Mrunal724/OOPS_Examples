//Problem Statement 
/*Exercise 2: Vehicle Inheritance

Base Class: Vehicle
Attributes: brand, speed
Method: showDetails()

Derived Class: Car
Attribute: modelName
Method: showCarDetails()

📝 Task:
Create a Car object, set all values using a constructor, and display them.*/

#include<iostream>
#include<string>
using namespace std;

class Vehicle{
    public:
  string brand;
  float speed;
  
  Vehicle(string brand,float speed){
      this-> brand = brand;
      this->speed = speed;
  }
};

class Car : public Vehicle{
    public:
    string modelname;
    
    Car(string brand, float speed, string modelname) : Vehicle(brand,speed){
        this->modelname = modelname;
    }
    
    void showcarDetails(){
        cout<<"The brand of the car is "<<brand<<endl;
        cout<<"The speed of the car is "<<speed<<endl;
        cout<<"The modelname of the car is "<<modelname<<endl;
        cout<<"---------------"<<endl;
    }
};

int main(){
    
    
    Car v1("Mahindra", 200.00, "BE6E");
    v1.showcarDetails();
    Car v2("Tata", 250.01, "Curvv");
    v2.showcarDetails();
    
    return 0;
}
