// Inheritance 

#include<iostream>
#include<string>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Animal is Eating"<<endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout<<"Dog is Barking"<<endl;
    }
};

int main(){
    
    Dog D1;
    D1.eat();
    D1.bark();
    
    
    return 0;
}