// 🟡 Intermediate Level – Ambiguity Resolution Using Scope Resolution Operator

// Problem 2: Ambiguous Functions
// Create:

// Base1: void show() { cout << "Base1 show" << endl; }

// Base2: void show() { cout << "Base2 show" << endl; }

// Derived: Inherits from both

// Task: Resolve ambiguity using the scope resolution operator and print both show methods in main() using a Derived class object.

// Expected Output:
// Base1 show
// Base2 show



#include<iostream>
#include<string>
using namespace std;

class Base1{
    public:
    void show(){
        cout<<"Base1 show"<<endl;
    }
};
class Base2{
    public:
    void show(){
        cout<<"Base2 show"<<endl;
    }
};
class Derived: public Base1, public Base2{
  public:
  void display(){
      Base1::show();
      Base2::show();
      cout<<"Its from derived class"<<endl;
  }
};

int main(){
  Derived d1;
  d1.display();
  cout<<"--------------------------"<<endl;
  d1.Base1::show();
  d1.Base2::show();
 
    return 0;
}
