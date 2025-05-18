// 🟢 Problem 1 – Basic Hierarchical Structure

// Create a base class Animal with a method speak().
// Create two derived classes:

// Dog: method bark()

// Cat: method meow()

// Create objects of Dog and Cat and call speak(), bark(), and meow() appropriately.

// Expected Output:
// Animal speaks
// Dog barks
// Animal speaks
// Cat meows


#include<iostream>
#include<string>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class Dog : public Animal{
    public:
    void bark(){
        cout<<"Barking"<<endl;
    }
};
class Cat : public Animal{
    public:
    void meow(){
        cout<<"Meow"<<endl;
    }
};
int main(){
    Dog d1;
    d1.speak();
    d1.bark();
    
    cout<<"-------------------------------"<<endl;
    
    Cat c1;
    c1.speak();
    c1.meow();
    
    return 0;
}
