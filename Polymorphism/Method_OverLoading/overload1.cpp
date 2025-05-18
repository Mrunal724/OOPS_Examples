// 🧩 Practice Problem – Method Overloading

// Create a class called AreaCalculator with overloaded functions to calculate:
// Area of a square → one argument: side
// Area of a rectangle → two arguments: length and width
// Area of a circle → one float argument: radius

// 🔧 Task Requirements:
// Define a class AreaCalculator.
// Overload a function area().
// Use appropriate data types for inputs.
// In main(), create an object and call all three versions.

// 🎯 Sample Output:

// Area of square (side=4): 16
// Area of rectangle (4, 5): 20
// Area of circle (radius=3.0): 28.26

// 📝 Hint:
// Use:
// int for square and rectangle
// float for circle
// const float PI = 3.14;

#include<iostream>
using namespace std;

class AreaCalculator{
  public:
  int Area(int s){
      return s*s;
  }
  int Area(int l, int b){
      return l*b;
  }
  float Area(float r){
      return 3.14*r*r;
  }
};

int main(){
    
    AreaCalculator obj;
    cout<<"Area of Square = "<<obj.Area(5)<<endl;
    cout<<"Area of Rectangle = "<<obj.Area(7,9)<<endl;
    cout<<"Area of Circle = "<<obj.Area(3.6f, 9.5f);
    return 0;
}
