// 🧪 Practice Problems

// 🟢 Problem 1: Basic Hybrid Structure

// Create:
// Base class: Device → method powerOn()

// Intermediate classes:
// Phone → inherits Device, method call()
// Camera → inherits Device, method takePhoto()

// Final class SmartPhone → inherits both Phone and Camera

// Use virtual inheritance to avoid ambiguity.

// Expected Output:
// Device powered on
// Making call
// Taking photo


#include<iostream>
#include<string>
using namespace std;

class Device{
    public:
    void powerOn(){
        cout<<"Device Powered ON";
    }
};
class Phone: virtual public Device{
    public:
    void call(){
        cout<<"Making Call"<<endl;
    }
};
class Camera: virtual public Device{
    public:
    void takePhoto(){
        cout<<"Taking photo"<<endl;
    }
};
class Smartphone: public Phone, public Camera{
    public:
    void allfunctions(){
        cout<<"Doing all functions"<<endl;
    }
};
int main(){
    Smartphone s;
    s.powerOn();
    s.call();
    s.takePhoto();
    
    return 0;
}
